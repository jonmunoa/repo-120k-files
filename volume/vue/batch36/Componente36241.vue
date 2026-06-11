<template>
  <section class="panel-36241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36241");
const base = ref(36241);
const total = computed(() => base.value * 2);

function incrementar36241() {
  base.value++;
}
</script>
