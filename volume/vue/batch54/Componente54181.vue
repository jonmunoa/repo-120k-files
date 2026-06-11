<template>
  <section class="panel-54181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54181");
const base = ref(54181);
const total = computed(() => base.value * 2);

function incrementar54181() {
  base.value++;
}
</script>
