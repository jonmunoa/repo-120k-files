<template>
  <section class="panel-28333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28333");
const base = ref(28333);
const total = computed(() => base.value * 2);

function incrementar28333() {
  base.value++;
}
</script>
