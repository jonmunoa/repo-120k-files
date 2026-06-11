<template>
  <section class="panel-57033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57033");
const base = ref(57033);
const total = computed(() => base.value * 2);

function incrementar57033() {
  base.value++;
}
</script>
