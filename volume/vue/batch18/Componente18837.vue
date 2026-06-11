<template>
  <section class="panel-18837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18837");
const base = ref(18837);
const total = computed(() => base.value * 2);

function incrementar18837() {
  base.value++;
}
</script>
