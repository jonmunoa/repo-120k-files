<template>
  <section class="panel-29821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29821");
const base = ref(29821);
const total = computed(() => base.value * 2);

function incrementar29821() {
  base.value++;
}
</script>
