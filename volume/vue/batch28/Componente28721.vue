<template>
  <section class="panel-28721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28721");
const base = ref(28721);
const total = computed(() => base.value * 2);

function incrementar28721() {
  base.value++;
}
</script>
