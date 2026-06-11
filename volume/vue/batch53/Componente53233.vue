<template>
  <section class="panel-53233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53233");
const base = ref(53233);
const total = computed(() => base.value * 2);

function incrementar53233() {
  base.value++;
}
</script>
