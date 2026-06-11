<template>
  <section class="panel-42901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42901");
const base = ref(42901);
const total = computed(() => base.value * 2);

function incrementar42901() {
  base.value++;
}
</script>
