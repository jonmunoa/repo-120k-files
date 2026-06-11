<template>
  <section class="panel-48021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48021");
const base = ref(48021);
const total = computed(() => base.value * 2);

function incrementar48021() {
  base.value++;
}
</script>
