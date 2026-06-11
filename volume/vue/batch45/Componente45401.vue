<template>
  <section class="panel-45401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45401");
const base = ref(45401);
const total = computed(() => base.value * 2);

function incrementar45401() {
  base.value++;
}
</script>
