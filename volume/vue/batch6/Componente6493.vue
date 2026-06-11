<template>
  <section class="panel-6493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6493");
const base = ref(6493);
const total = computed(() => base.value * 2);

function incrementar6493() {
  base.value++;
}
</script>
