<template>
  <section class="panel-52281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52281");
const base = ref(52281);
const total = computed(() => base.value * 2);

function incrementar52281() {
  base.value++;
}
</script>
