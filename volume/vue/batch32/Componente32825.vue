<template>
  <section class="panel-32825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32825");
const base = ref(32825);
const total = computed(() => base.value * 2);

function incrementar32825() {
  base.value++;
}
</script>
