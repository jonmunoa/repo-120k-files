<template>
  <section class="panel-29825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29825");
const base = ref(29825);
const total = computed(() => base.value * 2);

function incrementar29825() {
  base.value++;
}
</script>
