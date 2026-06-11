<template>
  <section class="panel-50877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50877");
const base = ref(50877);
const total = computed(() => base.value * 2);

function incrementar50877() {
  base.value++;
}
</script>
