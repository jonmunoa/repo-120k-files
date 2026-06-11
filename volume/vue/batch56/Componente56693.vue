<template>
  <section class="panel-56693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56693");
const base = ref(56693);
const total = computed(() => base.value * 2);

function incrementar56693() {
  base.value++;
}
</script>
