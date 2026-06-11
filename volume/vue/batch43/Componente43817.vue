<template>
  <section class="panel-43817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43817");
const base = ref(43817);
const total = computed(() => base.value * 2);

function incrementar43817() {
  base.value++;
}
</script>
