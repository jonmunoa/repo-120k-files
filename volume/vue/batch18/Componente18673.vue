<template>
  <section class="panel-18673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18673");
const base = ref(18673);
const total = computed(() => base.value * 2);

function incrementar18673() {
  base.value++;
}
</script>
