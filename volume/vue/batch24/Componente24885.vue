<template>
  <section class="panel-24885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24885");
const base = ref(24885);
const total = computed(() => base.value * 2);

function incrementar24885() {
  base.value++;
}
</script>
