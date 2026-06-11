<template>
  <section class="panel-11461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11461");
const base = ref(11461);
const total = computed(() => base.value * 2);

function incrementar11461() {
  base.value++;
}
</script>
