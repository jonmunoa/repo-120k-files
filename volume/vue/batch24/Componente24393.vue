<template>
  <section class="panel-24393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24393");
const base = ref(24393);
const total = computed(() => base.value * 2);

function incrementar24393() {
  base.value++;
}
</script>
