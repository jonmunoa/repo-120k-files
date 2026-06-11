<template>
  <section class="panel-24445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24445");
const base = ref(24445);
const total = computed(() => base.value * 2);

function incrementar24445() {
  base.value++;
}
</script>
