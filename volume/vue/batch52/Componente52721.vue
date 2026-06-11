<template>
  <section class="panel-52721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52721");
const base = ref(52721);
const total = computed(() => base.value * 2);

function incrementar52721() {
  base.value++;
}
</script>
