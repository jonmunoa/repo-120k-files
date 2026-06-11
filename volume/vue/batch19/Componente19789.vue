<template>
  <section class="panel-19789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19789");
const base = ref(19789);
const total = computed(() => base.value * 2);

function incrementar19789() {
  base.value++;
}
</script>
