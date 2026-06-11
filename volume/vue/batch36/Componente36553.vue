<template>
  <section class="panel-36553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36553");
const base = ref(36553);
const total = computed(() => base.value * 2);

function incrementar36553() {
  base.value++;
}
</script>
