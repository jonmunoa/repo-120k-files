<template>
  <section class="panel-53881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53881");
const base = ref(53881);
const total = computed(() => base.value * 2);

function incrementar53881() {
  base.value++;
}
</script>
