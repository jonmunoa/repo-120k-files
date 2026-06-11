<template>
  <section class="panel-36817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36817");
const base = ref(36817);
const total = computed(() => base.value * 2);

function incrementar36817() {
  base.value++;
}
</script>
