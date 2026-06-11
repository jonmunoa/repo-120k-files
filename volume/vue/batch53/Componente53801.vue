<template>
  <section class="panel-53801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53801");
const base = ref(53801);
const total = computed(() => base.value * 2);

function incrementar53801() {
  base.value++;
}
</script>
