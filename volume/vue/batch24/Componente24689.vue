<template>
  <section class="panel-24689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24689");
const base = ref(24689);
const total = computed(() => base.value * 2);

function incrementar24689() {
  base.value++;
}
</script>
