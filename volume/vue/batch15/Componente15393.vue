<template>
  <section class="panel-15393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15393");
const base = ref(15393);
const total = computed(() => base.value * 2);

function incrementar15393() {
  base.value++;
}
</script>
