<template>
  <section class="panel-16993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16993");
const base = ref(16993);
const total = computed(() => base.value * 2);

function incrementar16993() {
  base.value++;
}
</script>
