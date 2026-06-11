<template>
  <section class="panel-43901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43901");
const base = ref(43901);
const total = computed(() => base.value * 2);

function incrementar43901() {
  base.value++;
}
</script>
