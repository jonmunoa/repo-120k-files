<template>
  <section class="panel-52561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52561");
const base = ref(52561);
const total = computed(() => base.value * 2);

function incrementar52561() {
  base.value++;
}
</script>
