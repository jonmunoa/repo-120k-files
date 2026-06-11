<template>
  <section class="panel-28801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28801");
const base = ref(28801);
const total = computed(() => base.value * 2);

function incrementar28801() {
  base.value++;
}
</script>
