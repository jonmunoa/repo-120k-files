<template>
  <section class="panel-55617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55617");
const base = ref(55617);
const total = computed(() => base.value * 2);

function incrementar55617() {
  base.value++;
}
</script>
