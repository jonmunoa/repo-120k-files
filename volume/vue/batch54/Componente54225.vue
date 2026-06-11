<template>
  <section class="panel-54225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54225");
const base = ref(54225);
const total = computed(() => base.value * 2);

function incrementar54225() {
  base.value++;
}
</script>
