<template>
  <section class="panel-2361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2361");
const base = ref(2361);
const total = computed(() => base.value * 2);

function incrementar2361() {
  base.value++;
}
</script>
