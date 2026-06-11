<template>
  <section class="panel-28885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28885");
const base = ref(28885);
const total = computed(() => base.value * 2);

function incrementar28885() {
  base.value++;
}
</script>
