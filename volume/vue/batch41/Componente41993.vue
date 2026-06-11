<template>
  <section class="panel-41993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41993");
const base = ref(41993);
const total = computed(() => base.value * 2);

function incrementar41993() {
  base.value++;
}
</script>
