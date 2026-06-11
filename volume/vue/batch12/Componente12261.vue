<template>
  <section class="panel-12261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12261");
const base = ref(12261);
const total = computed(() => base.value * 2);

function incrementar12261() {
  base.value++;
}
</script>
