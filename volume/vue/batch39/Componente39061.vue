<template>
  <section class="panel-39061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39061");
const base = ref(39061);
const total = computed(() => base.value * 2);

function incrementar39061() {
  base.value++;
}
</script>
