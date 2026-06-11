<template>
  <section class="panel-6785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6785");
const base = ref(6785);
const total = computed(() => base.value * 2);

function incrementar6785() {
  base.value++;
}
</script>
