<template>
  <section class="panel-19281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19281");
const base = ref(19281);
const total = computed(() => base.value * 2);

function incrementar19281() {
  base.value++;
}
</script>
