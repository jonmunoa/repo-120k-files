<template>
  <section class="panel-19693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19693");
const base = ref(19693);
const total = computed(() => base.value * 2);

function incrementar19693() {
  base.value++;
}
</script>
