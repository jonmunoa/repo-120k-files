<template>
  <section class="panel-31541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31541");
const base = ref(31541);
const total = computed(() => base.value * 2);

function incrementar31541() {
  base.value++;
}
</script>
