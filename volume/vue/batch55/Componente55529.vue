<template>
  <section class="panel-55529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55529");
const base = ref(55529);
const total = computed(() => base.value * 2);

function incrementar55529() {
  base.value++;
}
</script>
