<template>
  <section class="panel-457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 457");
const base = ref(457);
const total = computed(() => base.value * 2);

function incrementar457() {
  base.value++;
}
</script>
