<template>
  <section class="panel-45209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45209");
const base = ref(45209);
const total = computed(() => base.value * 2);

function incrementar45209() {
  base.value++;
}
</script>
