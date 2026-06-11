<template>
  <section class="panel-12333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12333");
const base = ref(12333);
const total = computed(() => base.value * 2);

function incrementar12333() {
  base.value++;
}
</script>
