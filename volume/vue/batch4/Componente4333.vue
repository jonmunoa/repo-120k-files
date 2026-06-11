<template>
  <section class="panel-4333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4333");
const base = ref(4333);
const total = computed(() => base.value * 2);

function incrementar4333() {
  base.value++;
}
</script>
