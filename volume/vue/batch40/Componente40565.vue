<template>
  <section class="panel-40565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40565");
const base = ref(40565);
const total = computed(() => base.value * 2);

function incrementar40565() {
  base.value++;
}
</script>
