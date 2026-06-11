<template>
  <section class="panel-5901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5901");
const base = ref(5901);
const total = computed(() => base.value * 2);

function incrementar5901() {
  base.value++;
}
</script>
