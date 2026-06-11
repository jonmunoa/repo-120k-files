<template>
  <section class="panel-6537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6537");
const base = ref(6537);
const total = computed(() => base.value * 2);

function incrementar6537() {
  base.value++;
}
</script>
