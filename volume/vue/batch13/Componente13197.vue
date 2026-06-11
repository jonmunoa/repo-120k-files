<template>
  <section class="panel-13197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13197");
const base = ref(13197);
const total = computed(() => base.value * 2);

function incrementar13197() {
  base.value++;
}
</script>
