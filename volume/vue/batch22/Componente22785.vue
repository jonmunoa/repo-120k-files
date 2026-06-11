<template>
  <section class="panel-22785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22785");
const base = ref(22785);
const total = computed(() => base.value * 2);

function incrementar22785() {
  base.value++;
}
</script>
