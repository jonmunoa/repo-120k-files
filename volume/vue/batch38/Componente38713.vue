<template>
  <section class="panel-38713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38713");
const base = ref(38713);
const total = computed(() => base.value * 2);

function incrementar38713() {
  base.value++;
}
</script>
