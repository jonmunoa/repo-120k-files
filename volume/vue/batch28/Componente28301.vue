<template>
  <section class="panel-28301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28301");
const base = ref(28301);
const total = computed(() => base.value * 2);

function incrementar28301() {
  base.value++;
}
</script>
