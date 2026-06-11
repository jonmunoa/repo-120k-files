<template>
  <section class="panel-69">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 69");
const base = ref(69);
const total = computed(() => base.value * 2);

function incrementar69() {
  base.value++;
}
</script>
