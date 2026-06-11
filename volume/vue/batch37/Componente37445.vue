<template>
  <section class="panel-37445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37445");
const base = ref(37445);
const total = computed(() => base.value * 2);

function incrementar37445() {
  base.value++;
}
</script>
