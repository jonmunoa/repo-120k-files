<template>
  <section class="panel-20553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20553");
const base = ref(20553);
const total = computed(() => base.value * 2);

function incrementar20553() {
  base.value++;
}
</script>
