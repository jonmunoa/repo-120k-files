<template>
  <section class="panel-28897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28897");
const base = ref(28897);
const total = computed(() => base.value * 2);

function incrementar28897() {
  base.value++;
}
</script>
