<template>
  <section class="panel-57433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57433");
const base = ref(57433);
const total = computed(() => base.value * 2);

function incrementar57433() {
  base.value++;
}
</script>
