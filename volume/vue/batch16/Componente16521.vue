<template>
  <section class="panel-16521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16521");
const base = ref(16521);
const total = computed(() => base.value * 2);

function incrementar16521() {
  base.value++;
}
</script>
