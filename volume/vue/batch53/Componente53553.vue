<template>
  <section class="panel-53553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53553");
const base = ref(53553);
const total = computed(() => base.value * 2);

function incrementar53553() {
  base.value++;
}
</script>
