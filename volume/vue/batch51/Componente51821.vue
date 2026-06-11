<template>
  <section class="panel-51821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51821");
const base = ref(51821);
const total = computed(() => base.value * 2);

function incrementar51821() {
  base.value++;
}
</script>
