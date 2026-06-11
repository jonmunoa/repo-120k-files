<template>
  <section class="panel-43993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43993");
const base = ref(43993);
const total = computed(() => base.value * 2);

function incrementar43993() {
  base.value++;
}
</script>
