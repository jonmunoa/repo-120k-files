<template>
  <section class="panel-15453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15453");
const base = ref(15453);
const total = computed(() => base.value * 2);

function incrementar15453() {
  base.value++;
}
</script>
