<template>
  <section class="panel-30393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30393");
const base = ref(30393);
const total = computed(() => base.value * 2);

function incrementar30393() {
  base.value++;
}
</script>
