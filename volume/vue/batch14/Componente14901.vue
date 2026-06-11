<template>
  <section class="panel-14901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14901");
const base = ref(14901);
const total = computed(() => base.value * 2);

function incrementar14901() {
  base.value++;
}
</script>
