<template>
  <section class="panel-5105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5105");
const base = ref(5105);
const total = computed(() => base.value * 2);

function incrementar5105() {
  base.value++;
}
</script>
