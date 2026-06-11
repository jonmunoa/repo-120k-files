<template>
  <section class="panel-1821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1821");
const base = ref(1821);
const total = computed(() => base.value * 2);

function incrementar1821() {
  base.value++;
}
</script>
