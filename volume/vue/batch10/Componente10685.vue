<template>
  <section class="panel-10685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10685");
const base = ref(10685);
const total = computed(() => base.value * 2);

function incrementar10685() {
  base.value++;
}
</script>
