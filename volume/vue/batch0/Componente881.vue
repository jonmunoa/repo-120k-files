<template>
  <section class="panel-881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 881");
const base = ref(881);
const total = computed(() => base.value * 2);

function incrementar881() {
  base.value++;
}
</script>
