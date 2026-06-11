<template>
  <section class="panel-28121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28121");
const base = ref(28121);
const total = computed(() => base.value * 2);

function incrementar28121() {
  base.value++;
}
</script>
