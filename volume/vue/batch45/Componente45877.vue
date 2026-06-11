<template>
  <section class="panel-45877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45877");
const base = ref(45877);
const total = computed(() => base.value * 2);

function incrementar45877() {
  base.value++;
}
</script>
