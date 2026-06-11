<template>
  <section class="panel-54877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54877");
const base = ref(54877);
const total = computed(() => base.value * 2);

function incrementar54877() {
  base.value++;
}
</script>
