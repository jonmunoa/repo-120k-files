<template>
  <section class="panel-13673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13673");
const base = ref(13673);
const total = computed(() => base.value * 2);

function incrementar13673() {
  base.value++;
}
</script>
