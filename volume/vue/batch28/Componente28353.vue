<template>
  <section class="panel-28353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28353");
const base = ref(28353);
const total = computed(() => base.value * 2);

function incrementar28353() {
  base.value++;
}
</script>
