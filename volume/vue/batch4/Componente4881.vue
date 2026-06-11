<template>
  <section class="panel-4881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4881");
const base = ref(4881);
const total = computed(() => base.value * 2);

function incrementar4881() {
  base.value++;
}
</script>
