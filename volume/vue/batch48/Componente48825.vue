<template>
  <section class="panel-48825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48825");
const base = ref(48825);
const total = computed(() => base.value * 2);

function incrementar48825() {
  base.value++;
}
</script>
