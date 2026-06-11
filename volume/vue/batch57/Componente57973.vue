<template>
  <section class="panel-57973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57973");
const base = ref(57973);
const total = computed(() => base.value * 2);

function incrementar57973() {
  base.value++;
}
</script>
