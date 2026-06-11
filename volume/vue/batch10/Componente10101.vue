<template>
  <section class="panel-10101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10101");
const base = ref(10101);
const total = computed(() => base.value * 2);

function incrementar10101() {
  base.value++;
}
</script>
