<template>
  <section class="panel-43713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43713");
const base = ref(43713);
const total = computed(() => base.value * 2);

function incrementar43713() {
  base.value++;
}
</script>
