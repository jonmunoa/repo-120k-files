<template>
  <section class="panel-37333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37333");
const base = ref(37333);
const total = computed(() => base.value * 2);

function incrementar37333() {
  base.value++;
}
</script>
