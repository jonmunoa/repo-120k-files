<template>
  <section class="panel-35397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35397");
const base = ref(35397);
const total = computed(() => base.value * 2);

function incrementar35397() {
  base.value++;
}
</script>
