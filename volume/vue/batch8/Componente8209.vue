<template>
  <section class="panel-8209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8209");
const base = ref(8209);
const total = computed(() => base.value * 2);

function incrementar8209() {
  base.value++;
}
</script>
