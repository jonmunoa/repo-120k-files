<template>
  <section class="panel-38337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38337");
const base = ref(38337);
const total = computed(() => base.value * 2);

function incrementar38337() {
  base.value++;
}
</script>
