<template>
  <section class="panel-36821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36821");
const base = ref(36821);
const total = computed(() => base.value * 2);

function incrementar36821() {
  base.value++;
}
</script>
