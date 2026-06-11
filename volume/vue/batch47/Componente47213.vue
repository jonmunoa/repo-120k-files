<template>
  <section class="panel-47213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47213");
const base = ref(47213);
const total = computed(() => base.value * 2);

function incrementar47213() {
  base.value++;
}
</script>
