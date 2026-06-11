<template>
  <section class="panel-30713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30713");
const base = ref(30713);
const total = computed(() => base.value * 2);

function incrementar30713() {
  base.value++;
}
</script>
