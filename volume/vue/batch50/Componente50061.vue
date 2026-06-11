<template>
  <section class="panel-50061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50061");
const base = ref(50061);
const total = computed(() => base.value * 2);

function incrementar50061() {
  base.value++;
}
</script>
