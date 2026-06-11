<template>
  <section class="panel-23049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23049");
const base = ref(23049);
const total = computed(() => base.value * 2);

function incrementar23049() {
  base.value++;
}
</script>
