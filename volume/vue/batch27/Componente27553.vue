<template>
  <section class="panel-27553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27553");
const base = ref(27553);
const total = computed(() => base.value * 2);

function incrementar27553() {
  base.value++;
}
</script>
