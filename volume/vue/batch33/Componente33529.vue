<template>
  <section class="panel-33529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33529");
const base = ref(33529);
const total = computed(() => base.value * 2);

function incrementar33529() {
  base.value++;
}
</script>
