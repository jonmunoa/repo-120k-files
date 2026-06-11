<template>
  <section class="panel-20161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20161");
const base = ref(20161);
const total = computed(() => base.value * 2);

function incrementar20161() {
  base.value++;
}
</script>
