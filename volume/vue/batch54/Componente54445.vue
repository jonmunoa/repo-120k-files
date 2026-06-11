<template>
  <section class="panel-54445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54445");
const base = ref(54445);
const total = computed(() => base.value * 2);

function incrementar54445() {
  base.value++;
}
</script>
