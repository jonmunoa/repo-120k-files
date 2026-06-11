<template>
  <section class="panel-14693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14693");
const base = ref(14693);
const total = computed(() => base.value * 2);

function incrementar14693() {
  base.value++;
}
</script>
