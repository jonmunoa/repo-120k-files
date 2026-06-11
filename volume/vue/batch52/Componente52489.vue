<template>
  <section class="panel-52489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52489");
const base = ref(52489);
const total = computed(() => base.value * 2);

function incrementar52489() {
  base.value++;
}
</script>
