<template>
  <section class="panel-28641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28641");
const base = ref(28641);
const total = computed(() => base.value * 2);

function incrementar28641() {
  base.value++;
}
</script>
