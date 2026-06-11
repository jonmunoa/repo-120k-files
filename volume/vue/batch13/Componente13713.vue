<template>
  <section class="panel-13713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13713");
const base = ref(13713);
const total = computed(() => base.value * 2);

function incrementar13713() {
  base.value++;
}
</script>
