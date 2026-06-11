<template>
  <section class="panel-233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 233");
const base = ref(233);
const total = computed(() => base.value * 2);

function incrementar233() {
  base.value++;
}
</script>
