<template>
  <section class="panel-51533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51533");
const base = ref(51533);
const total = computed(() => base.value * 2);

function incrementar51533() {
  base.value++;
}
</script>
