<template>
  <section class="panel-20381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20381");
const base = ref(20381);
const total = computed(() => base.value * 2);

function incrementar20381() {
  base.value++;
}
</script>
