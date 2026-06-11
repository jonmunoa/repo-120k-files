<template>
  <section class="panel-28501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28501");
const base = ref(28501);
const total = computed(() => base.value * 2);

function incrementar28501() {
  base.value++;
}
</script>
