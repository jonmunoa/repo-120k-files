<template>
  <section class="panel-28657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28657");
const base = ref(28657);
const total = computed(() => base.value * 2);

function incrementar28657() {
  base.value++;
}
</script>
