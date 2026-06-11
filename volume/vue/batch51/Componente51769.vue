<template>
  <section class="panel-51769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51769");
const base = ref(51769);
const total = computed(() => base.value * 2);

function incrementar51769() {
  base.value++;
}
</script>
