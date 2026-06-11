<template>
  <section class="panel-15789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15789");
const base = ref(15789);
const total = computed(() => base.value * 2);

function incrementar15789() {
  base.value++;
}
</script>
