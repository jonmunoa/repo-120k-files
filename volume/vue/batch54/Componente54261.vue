<template>
  <section class="panel-54261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54261");
const base = ref(54261);
const total = computed(() => base.value * 2);

function incrementar54261() {
  base.value++;
}
</script>
