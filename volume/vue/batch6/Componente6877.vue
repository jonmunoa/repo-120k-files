<template>
  <section class="panel-6877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6877");
const base = ref(6877);
const total = computed(() => base.value * 2);

function incrementar6877() {
  base.value++;
}
</script>
