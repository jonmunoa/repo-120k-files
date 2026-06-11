<template>
  <section class="panel-50885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50885");
const base = ref(50885);
const total = computed(() => base.value * 2);

function incrementar50885() {
  base.value++;
}
</script>
