<template>
  <section class="panel-45365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45365");
const base = ref(45365);
const total = computed(() => base.value * 2);

function incrementar45365() {
  base.value++;
}
</script>
