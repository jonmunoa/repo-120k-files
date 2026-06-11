<template>
  <section class="panel-31393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31393");
const base = ref(31393);
const total = computed(() => base.value * 2);

function incrementar31393() {
  base.value++;
}
</script>
