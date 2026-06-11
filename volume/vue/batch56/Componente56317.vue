<template>
  <section class="panel-56317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56317");
const base = ref(56317);
const total = computed(() => base.value * 2);

function incrementar56317() {
  base.value++;
}
</script>
