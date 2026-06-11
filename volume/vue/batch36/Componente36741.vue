<template>
  <section class="panel-36741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36741");
const base = ref(36741);
const total = computed(() => base.value * 2);

function incrementar36741() {
  base.value++;
}
</script>
