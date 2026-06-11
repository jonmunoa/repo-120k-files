<template>
  <section class="panel-34201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34201");
const base = ref(34201);
const total = computed(() => base.value * 2);

function incrementar34201() {
  base.value++;
}
</script>
