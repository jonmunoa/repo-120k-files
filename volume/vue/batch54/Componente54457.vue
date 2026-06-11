<template>
  <section class="panel-54457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54457");
const base = ref(54457);
const total = computed(() => base.value * 2);

function incrementar54457() {
  base.value++;
}
</script>
