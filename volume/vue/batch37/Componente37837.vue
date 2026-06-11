<template>
  <section class="panel-37837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37837");
const base = ref(37837);
const total = computed(() => base.value * 2);

function incrementar37837() {
  base.value++;
}
</script>
