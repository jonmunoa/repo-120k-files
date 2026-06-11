<template>
  <section class="panel-22393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22393");
const base = ref(22393);
const total = computed(() => base.value * 2);

function incrementar22393() {
  base.value++;
}
</script>
