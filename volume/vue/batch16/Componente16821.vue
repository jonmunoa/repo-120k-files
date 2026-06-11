<template>
  <section class="panel-16821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16821");
const base = ref(16821);
const total = computed(() => base.value * 2);

function incrementar16821() {
  base.value++;
}
</script>
