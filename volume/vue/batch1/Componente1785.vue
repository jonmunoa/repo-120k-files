<template>
  <section class="panel-1785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1785");
const base = ref(1785);
const total = computed(() => base.value * 2);

function incrementar1785() {
  base.value++;
}
</script>
