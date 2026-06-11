<template>
  <section class="panel-10277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10277");
const base = ref(10277);
const total = computed(() => base.value * 2);

function incrementar10277() {
  base.value++;
}
</script>
