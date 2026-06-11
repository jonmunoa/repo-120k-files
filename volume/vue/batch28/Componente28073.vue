<template>
  <section class="panel-28073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28073");
const base = ref(28073);
const total = computed(() => base.value * 2);

function incrementar28073() {
  base.value++;
}
</script>
