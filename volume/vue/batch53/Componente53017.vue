<template>
  <section class="panel-53017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53017");
const base = ref(53017);
const total = computed(() => base.value * 2);

function incrementar53017() {
  base.value++;
}
</script>
