<template>
  <section class="panel-23713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23713");
const base = ref(23713);
const total = computed(() => base.value * 2);

function incrementar23713() {
  base.value++;
}
</script>
