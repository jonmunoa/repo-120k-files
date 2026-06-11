<template>
  <section class="panel-28361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28361");
const base = ref(28361);
const total = computed(() => base.value * 2);

function incrementar28361() {
  base.value++;
}
</script>
