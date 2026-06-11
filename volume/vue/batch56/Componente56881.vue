<template>
  <section class="panel-56881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56881");
const base = ref(56881);
const total = computed(() => base.value * 2);

function incrementar56881() {
  base.value++;
}
</script>
