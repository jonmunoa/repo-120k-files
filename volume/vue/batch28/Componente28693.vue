<template>
  <section class="panel-28693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28693");
const base = ref(28693);
const total = computed(() => base.value * 2);

function incrementar28693() {
  base.value++;
}
</script>
