<template>
  <section class="panel-13189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13189");
const base = ref(13189);
const total = computed(() => base.value * 2);

function incrementar13189() {
  base.value++;
}
</script>
