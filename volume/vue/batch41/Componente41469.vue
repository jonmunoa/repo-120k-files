<template>
  <section class="panel-41469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41469");
const base = ref(41469);
const total = computed(() => base.value * 2);

function incrementar41469() {
  base.value++;
}
</script>
