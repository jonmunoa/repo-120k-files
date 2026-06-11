<template>
  <section class="panel-38393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38393");
const base = ref(38393);
const total = computed(() => base.value * 2);

function incrementar38393() {
  base.value++;
}
</script>
