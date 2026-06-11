<template>
  <section class="panel-13077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13077");
const base = ref(13077);
const total = computed(() => base.value * 2);

function incrementar13077() {
  base.value++;
}
</script>
