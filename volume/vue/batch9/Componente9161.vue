<template>
  <section class="panel-9161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9161");
const base = ref(9161);
const total = computed(() => base.value * 2);

function incrementar9161() {
  base.value++;
}
</script>
