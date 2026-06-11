<template>
  <section class="panel-12281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12281");
const base = ref(12281);
const total = computed(() => base.value * 2);

function incrementar12281() {
  base.value++;
}
</script>
