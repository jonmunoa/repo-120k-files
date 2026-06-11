<template>
  <section class="panel-50685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50685");
const base = ref(50685);
const total = computed(() => base.value * 2);

function incrementar50685() {
  base.value++;
}
</script>
