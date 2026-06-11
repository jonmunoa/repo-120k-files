<template>
  <section class="panel-5553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5553");
const base = ref(5553);
const total = computed(() => base.value * 2);

function incrementar5553() {
  base.value++;
}
</script>
