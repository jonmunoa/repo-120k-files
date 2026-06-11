<template>
  <section class="panel-56489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56489");
const base = ref(56489);
const total = computed(() => base.value * 2);

function incrementar56489() {
  base.value++;
}
</script>
