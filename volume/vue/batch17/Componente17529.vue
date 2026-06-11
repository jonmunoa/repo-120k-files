<template>
  <section class="panel-17529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17529");
const base = ref(17529);
const total = computed(() => base.value * 2);

function incrementar17529() {
  base.value++;
}
</script>
