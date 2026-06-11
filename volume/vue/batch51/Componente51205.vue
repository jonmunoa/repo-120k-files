<template>
  <section class="panel-51205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51205");
const base = ref(51205);
const total = computed(() => base.value * 2);

function incrementar51205() {
  base.value++;
}
</script>
