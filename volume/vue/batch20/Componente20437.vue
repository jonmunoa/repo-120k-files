<template>
  <section class="panel-20437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20437");
const base = ref(20437);
const total = computed(() => base.value * 2);

function incrementar20437() {
  base.value++;
}
</script>
