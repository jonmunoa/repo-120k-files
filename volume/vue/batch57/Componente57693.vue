<template>
  <section class="panel-57693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57693");
const base = ref(57693);
const total = computed(() => base.value * 2);

function incrementar57693() {
  base.value++;
}
</script>
