<template>
  <section class="panel-51673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51673");
const base = ref(51673);
const total = computed(() => base.value * 2);

function incrementar51673() {
  base.value++;
}
</script>
