<template>
  <section class="panel-53693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53693");
const base = ref(53693);
const total = computed(() => base.value * 2);

function incrementar53693() {
  base.value++;
}
</script>
