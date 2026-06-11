<template>
  <section class="panel-44825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44825");
const base = ref(44825);
const total = computed(() => base.value * 2);

function incrementar44825() {
  base.value++;
}
</script>
