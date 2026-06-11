<template>
  <section class="panel-17073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17073");
const base = ref(17073);
const total = computed(() => base.value * 2);

function incrementar17073() {
  base.value++;
}
</script>
