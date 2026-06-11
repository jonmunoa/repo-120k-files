<template>
  <section class="panel-28921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28921");
const base = ref(28921);
const total = computed(() => base.value * 2);

function incrementar28921() {
  base.value++;
}
</script>
