<template>
  <section class="panel-24713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24713");
const base = ref(24713);
const total = computed(() => base.value * 2);

function incrementar24713() {
  base.value++;
}
</script>
