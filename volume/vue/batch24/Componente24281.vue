<template>
  <section class="panel-24281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24281");
const base = ref(24281);
const total = computed(() => base.value * 2);

function incrementar24281() {
  base.value++;
}
</script>
