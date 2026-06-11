<template>
  <section class="panel-51969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51969");
const base = ref(51969);
const total = computed(() => base.value * 2);

function incrementar51969() {
  base.value++;
}
</script>
