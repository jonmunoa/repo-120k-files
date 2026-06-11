<template>
  <section class="panel-6469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6469");
const base = ref(6469);
const total = computed(() => base.value * 2);

function incrementar6469() {
  base.value++;
}
</script>
