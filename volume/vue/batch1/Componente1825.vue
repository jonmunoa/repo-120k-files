<template>
  <section class="panel-1825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1825");
const base = ref(1825);
const total = computed(() => base.value * 2);

function incrementar1825() {
  base.value++;
}
</script>
