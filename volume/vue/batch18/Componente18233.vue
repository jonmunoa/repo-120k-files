<template>
  <section class="panel-18233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18233");
const base = ref(18233);
const total = computed(() => base.value * 2);

function incrementar18233() {
  base.value++;
}
</script>
