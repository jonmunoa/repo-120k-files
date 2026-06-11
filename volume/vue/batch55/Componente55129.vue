<template>
  <section class="panel-55129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55129");
const base = ref(55129);
const total = computed(() => base.value * 2);

function incrementar55129() {
  base.value++;
}
</script>
