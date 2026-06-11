<template>
  <section class="panel-5109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5109");
const base = ref(5109);
const total = computed(() => base.value * 2);

function incrementar5109() {
  base.value++;
}
</script>
