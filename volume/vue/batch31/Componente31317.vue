<template>
  <section class="panel-31317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31317");
const base = ref(31317);
const total = computed(() => base.value * 2);

function incrementar31317() {
  base.value++;
}
</script>
