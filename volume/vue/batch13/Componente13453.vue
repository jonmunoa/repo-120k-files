<template>
  <section class="panel-13453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13453");
const base = ref(13453);
const total = computed(() => base.value * 2);

function incrementar13453() {
  base.value++;
}
</script>
