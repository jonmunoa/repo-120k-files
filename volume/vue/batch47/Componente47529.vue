<template>
  <section class="panel-47529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47529");
const base = ref(47529);
const total = computed(() => base.value * 2);

function incrementar47529() {
  base.value++;
}
</script>
