<template>
  <section class="panel-10117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10117");
const base = ref(10117);
const total = computed(() => base.value * 2);

function incrementar10117() {
  base.value++;
}
</script>
