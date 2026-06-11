<template>
  <section class="panel-7801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7801");
const base = ref(7801);
const total = computed(() => base.value * 2);

function incrementar7801() {
  base.value++;
}
</script>
