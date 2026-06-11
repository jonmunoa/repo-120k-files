<template>
  <section class="panel-2689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2689");
const base = ref(2689);
const total = computed(() => base.value * 2);

function incrementar2689() {
  base.value++;
}
</script>
