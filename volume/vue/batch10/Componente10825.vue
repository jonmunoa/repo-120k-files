<template>
  <section class="panel-10825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10825");
const base = ref(10825);
const total = computed(() => base.value * 2);

function incrementar10825() {
  base.value++;
}
</script>
