<template>
  <section class="panel-33917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33917");
const base = ref(33917);
const total = computed(() => base.value * 2);

function incrementar33917() {
  base.value++;
}
</script>
