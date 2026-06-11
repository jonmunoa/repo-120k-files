<template>
  <section class="panel-19769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19769");
const base = ref(19769);
const total = computed(() => base.value * 2);

function incrementar19769() {
  base.value++;
}
</script>
