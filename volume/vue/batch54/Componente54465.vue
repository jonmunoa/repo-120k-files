<template>
  <section class="panel-54465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54465");
const base = ref(54465);
const total = computed(() => base.value * 2);

function incrementar54465() {
  base.value++;
}
</script>
