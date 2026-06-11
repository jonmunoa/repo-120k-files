<template>
  <section class="panel-6205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6205");
const base = ref(6205);
const total = computed(() => base.value * 2);

function incrementar6205() {
  base.value++;
}
</script>
