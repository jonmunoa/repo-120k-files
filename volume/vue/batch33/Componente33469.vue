<template>
  <section class="panel-33469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33469");
const base = ref(33469);
const total = computed(() => base.value * 2);

function incrementar33469() {
  base.value++;
}
</script>
