<template>
  <section class="panel-16877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16877");
const base = ref(16877);
const total = computed(() => base.value * 2);

function incrementar16877() {
  base.value++;
}
</script>
