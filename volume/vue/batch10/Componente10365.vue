<template>
  <section class="panel-10365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10365");
const base = ref(10365);
const total = computed(() => base.value * 2);

function incrementar10365() {
  base.value++;
}
</script>
