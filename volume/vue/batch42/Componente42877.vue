<template>
  <section class="panel-42877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42877");
const base = ref(42877);
const total = computed(() => base.value * 2);

function incrementar42877() {
  base.value++;
}
</script>
