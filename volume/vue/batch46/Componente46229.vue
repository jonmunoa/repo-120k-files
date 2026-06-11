<template>
  <section class="panel-46229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46229");
const base = ref(46229);
const total = computed(() => base.value * 2);

function incrementar46229() {
  base.value++;
}
</script>
