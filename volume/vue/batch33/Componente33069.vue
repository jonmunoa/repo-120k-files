<template>
  <section class="panel-33069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33069");
const base = ref(33069);
const total = computed(() => base.value * 2);

function incrementar33069() {
  base.value++;
}
</script>
