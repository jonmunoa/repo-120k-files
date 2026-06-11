<template>
  <section class="panel-34917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34917");
const base = ref(34917);
const total = computed(() => base.value * 2);

function incrementar34917() {
  base.value++;
}
</script>
