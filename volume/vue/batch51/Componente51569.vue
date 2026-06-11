<template>
  <section class="panel-51569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51569");
const base = ref(51569);
const total = computed(() => base.value * 2);

function incrementar51569() {
  base.value++;
}
</script>
