<template>
  <section class="panel-7333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7333");
const base = ref(7333);
const total = computed(() => base.value * 2);

function incrementar7333() {
  base.value++;
}
</script>
