<template>
  <section class="panel-13341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13341");
const base = ref(13341);
const total = computed(() => base.value * 2);

function incrementar13341() {
  base.value++;
}
</script>
