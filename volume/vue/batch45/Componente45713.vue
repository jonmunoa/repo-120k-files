<template>
  <section class="panel-45713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45713");
const base = ref(45713);
const total = computed(() => base.value * 2);

function incrementar45713() {
  base.value++;
}
</script>
