<template>
  <section class="panel-45289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45289");
const base = ref(45289);
const total = computed(() => base.value * 2);

function incrementar45289() {
  base.value++;
}
</script>
