<template>
  <section class="panel-9233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9233");
const base = ref(9233);
const total = computed(() => base.value * 2);

function incrementar9233() {
  base.value++;
}
</script>
