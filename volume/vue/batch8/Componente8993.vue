<template>
  <section class="panel-8993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8993");
const base = ref(8993);
const total = computed(() => base.value * 2);

function incrementar8993() {
  base.value++;
}
</script>
