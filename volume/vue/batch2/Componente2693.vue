<template>
  <section class="panel-2693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2693");
const base = ref(2693);
const total = computed(() => base.value * 2);

function incrementar2693() {
  base.value++;
}
</script>
