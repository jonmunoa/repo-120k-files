<template>
  <section class="panel-28685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28685");
const base = ref(28685);
const total = computed(() => base.value * 2);

function incrementar28685() {
  base.value++;
}
</script>
