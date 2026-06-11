<template>
  <section class="panel-14885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14885");
const base = ref(14885);
const total = computed(() => base.value * 2);

function incrementar14885() {
  base.value++;
}
</script>
