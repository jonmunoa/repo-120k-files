<template>
  <section class="panel-56285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56285");
const base = ref(56285);
const total = computed(() => base.value * 2);

function incrementar56285() {
  base.value++;
}
</script>
