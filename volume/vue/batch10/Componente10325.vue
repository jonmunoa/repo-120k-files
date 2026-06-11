<template>
  <section class="panel-10325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10325");
const base = ref(10325);
const total = computed(() => base.value * 2);

function incrementar10325() {
  base.value++;
}
</script>
