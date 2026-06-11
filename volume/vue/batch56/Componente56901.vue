<template>
  <section class="panel-56901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56901");
const base = ref(56901);
const total = computed(() => base.value * 2);

function incrementar56901() {
  base.value++;
}
</script>
