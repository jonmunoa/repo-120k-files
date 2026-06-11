<template>
  <section class="panel-48285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48285");
const base = ref(48285);
const total = computed(() => base.value * 2);

function incrementar48285() {
  base.value++;
}
</script>
