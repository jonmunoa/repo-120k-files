<template>
  <section class="panel-7701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7701");
const base = ref(7701);
const total = computed(() => base.value * 2);

function incrementar7701() {
  base.value++;
}
</script>
