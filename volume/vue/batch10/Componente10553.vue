<template>
  <section class="panel-10553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10553");
const base = ref(10553);
const total = computed(() => base.value * 2);

function incrementar10553() {
  base.value++;
}
</script>
