<template>
  <section class="panel-9513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9513");
const base = ref(9513);
const total = computed(() => base.value * 2);

function incrementar9513() {
  base.value++;
}
</script>
