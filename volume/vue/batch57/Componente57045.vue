<template>
  <section class="panel-57045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57045");
const base = ref(57045);
const total = computed(() => base.value * 2);

function incrementar57045() {
  base.value++;
}
</script>
