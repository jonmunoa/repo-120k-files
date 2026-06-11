<template>
  <section class="panel-7877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7877");
const base = ref(7877);
const total = computed(() => base.value * 2);

function incrementar7877() {
  base.value++;
}
</script>
