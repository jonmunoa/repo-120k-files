<template>
  <section class="panel-6269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6269");
const base = ref(6269);
const total = computed(() => base.value * 2);

function incrementar6269() {
  base.value++;
}
</script>
