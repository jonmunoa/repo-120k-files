<template>
  <section class="panel-2109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2109");
const base = ref(2109);
const total = computed(() => base.value * 2);

function incrementar2109() {
  base.value++;
}
</script>
