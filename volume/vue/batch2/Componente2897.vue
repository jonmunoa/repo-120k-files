<template>
  <section class="panel-2897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2897");
const base = ref(2897);
const total = computed(() => base.value * 2);

function incrementar2897() {
  base.value++;
}
</script>
