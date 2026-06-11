<template>
  <section class="panel-51125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51125");
const base = ref(51125);
const total = computed(() => base.value * 2);

function incrementar51125() {
  base.value++;
}
</script>
