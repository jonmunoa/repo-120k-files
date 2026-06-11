<template>
  <section class="panel-23009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23009");
const base = ref(23009);
const total = computed(() => base.value * 2);

function incrementar23009() {
  base.value++;
}
</script>
