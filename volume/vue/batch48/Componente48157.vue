<template>
  <section class="panel-48157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48157");
const base = ref(48157);
const total = computed(() => base.value * 2);

function incrementar48157() {
  base.value++;
}
</script>
