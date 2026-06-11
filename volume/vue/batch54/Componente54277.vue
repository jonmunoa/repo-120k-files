<template>
  <section class="panel-54277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54277");
const base = ref(54277);
const total = computed(() => base.value * 2);

function incrementar54277() {
  base.value++;
}
</script>
