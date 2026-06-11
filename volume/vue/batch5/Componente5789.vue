<template>
  <section class="panel-5789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5789");
const base = ref(5789);
const total = computed(() => base.value * 2);

function incrementar5789() {
  base.value++;
}
</script>
