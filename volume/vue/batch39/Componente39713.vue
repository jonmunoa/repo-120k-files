<template>
  <section class="panel-39713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39713");
const base = ref(39713);
const total = computed(() => base.value * 2);

function incrementar39713() {
  base.value++;
}
</script>
