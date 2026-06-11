<template>
  <section class="panel-10969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10969");
const base = ref(10969);
const total = computed(() => base.value * 2);

function incrementar10969() {
  base.value++;
}
</script>
