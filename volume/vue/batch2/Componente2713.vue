<template>
  <section class="panel-2713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2713");
const base = ref(2713);
const total = computed(() => base.value * 2);

function incrementar2713() {
  base.value++;
}
</script>
