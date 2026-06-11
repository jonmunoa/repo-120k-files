<template>
  <section class="panel-5877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5877");
const base = ref(5877);
const total = computed(() => base.value * 2);

function incrementar5877() {
  base.value++;
}
</script>
