<template>
  <section class="panel-1061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1061");
const base = ref(1061);
const total = computed(() => base.value * 2);

function incrementar1061() {
  base.value++;
}
</script>
