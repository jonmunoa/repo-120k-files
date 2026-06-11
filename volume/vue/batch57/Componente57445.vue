<template>
  <section class="panel-57445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57445");
const base = ref(57445);
const total = computed(() => base.value * 2);

function incrementar57445() {
  base.value++;
}
</script>
