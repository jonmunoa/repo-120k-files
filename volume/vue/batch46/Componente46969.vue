<template>
  <section class="panel-46969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46969");
const base = ref(46969);
const total = computed(() => base.value * 2);

function incrementar46969() {
  base.value++;
}
</script>
