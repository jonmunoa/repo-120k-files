<template>
  <section class="panel-32061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32061");
const base = ref(32061);
const total = computed(() => base.value * 2);

function incrementar32061() {
  base.value++;
}
</script>
