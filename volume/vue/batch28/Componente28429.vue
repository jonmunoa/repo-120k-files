<template>
  <section class="panel-28429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28429");
const base = ref(28429);
const total = computed(() => base.value * 2);

function incrementar28429() {
  base.value++;
}
</script>
