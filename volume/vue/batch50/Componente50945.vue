<template>
  <section class="panel-50945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50945");
const base = ref(50945);
const total = computed(() => base.value * 2);

function incrementar50945() {
  base.value++;
}
</script>
