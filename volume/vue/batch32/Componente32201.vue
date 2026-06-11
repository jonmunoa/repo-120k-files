<template>
  <section class="panel-32201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32201");
const base = ref(32201);
const total = computed(() => base.value * 2);

function incrementar32201() {
  base.value++;
}
</script>
