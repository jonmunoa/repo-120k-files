<template>
  <section class="panel-46157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46157");
const base = ref(46157);
const total = computed(() => base.value * 2);

function incrementar46157() {
  base.value++;
}
</script>
