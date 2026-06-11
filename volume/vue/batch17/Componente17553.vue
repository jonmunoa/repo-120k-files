<template>
  <section class="panel-17553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17553");
const base = ref(17553);
const total = computed(() => base.value * 2);

function incrementar17553() {
  base.value++;
}
</script>
