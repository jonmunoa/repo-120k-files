<template>
  <section class="panel-19337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19337");
const base = ref(19337);
const total = computed(() => base.value * 2);

function incrementar19337() {
  base.value++;
}
</script>
