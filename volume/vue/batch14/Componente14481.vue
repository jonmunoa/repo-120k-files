<template>
  <section class="panel-14481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14481");
const base = ref(14481);
const total = computed(() => base.value * 2);

function incrementar14481() {
  base.value++;
}
</script>
