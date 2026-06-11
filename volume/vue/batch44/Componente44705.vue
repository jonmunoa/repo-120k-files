<template>
  <section class="panel-44705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44705");
const base = ref(44705);
const total = computed(() => base.value * 2);

function incrementar44705() {
  base.value++;
}
</script>
