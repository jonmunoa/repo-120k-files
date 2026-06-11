<template>
  <section class="panel-50141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50141");
const base = ref(50141);
const total = computed(() => base.value * 2);

function incrementar50141() {
  base.value++;
}
</script>
