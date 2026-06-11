<template>
  <section class="panel-32361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32361");
const base = ref(32361);
const total = computed(() => base.value * 2);

function incrementar32361() {
  base.value++;
}
</script>
