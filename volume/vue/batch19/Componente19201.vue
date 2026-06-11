<template>
  <section class="panel-19201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19201");
const base = ref(19201);
const total = computed(() => base.value * 2);

function incrementar19201() {
  base.value++;
}
</script>
