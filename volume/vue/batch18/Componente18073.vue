<template>
  <section class="panel-18073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18073");
const base = ref(18073);
const total = computed(() => base.value * 2);

function incrementar18073() {
  base.value++;
}
</script>
