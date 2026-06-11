<template>
  <section class="panel-53725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53725");
const base = ref(53725);
const total = computed(() => base.value * 2);

function incrementar53725() {
  base.value++;
}
</script>
