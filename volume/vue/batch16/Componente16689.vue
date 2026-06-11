<template>
  <section class="panel-16689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16689");
const base = ref(16689);
const total = computed(() => base.value * 2);

function incrementar16689() {
  base.value++;
}
</script>
