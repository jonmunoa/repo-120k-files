<template>
  <section class="panel-28061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28061");
const base = ref(28061);
const total = computed(() => base.value * 2);

function incrementar28061() {
  base.value++;
}
</script>
