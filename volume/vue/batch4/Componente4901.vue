<template>
  <section class="panel-4901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4901");
const base = ref(4901);
const total = computed(() => base.value * 2);

function incrementar4901() {
  base.value++;
}
</script>
