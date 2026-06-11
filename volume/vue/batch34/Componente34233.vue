<template>
  <section class="panel-34233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34233");
const base = ref(34233);
const total = computed(() => base.value * 2);

function incrementar34233() {
  base.value++;
}
</script>
