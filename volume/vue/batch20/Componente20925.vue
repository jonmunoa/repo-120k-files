<template>
  <section class="panel-20925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20925");
const base = ref(20925);
const total = computed(() => base.value * 2);

function incrementar20925() {
  base.value++;
}
</script>
