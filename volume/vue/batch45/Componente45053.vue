<template>
  <section class="panel-45053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45053");
const base = ref(45053);
const total = computed(() => base.value * 2);

function incrementar45053() {
  base.value++;
}
</script>
