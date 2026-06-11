<template>
  <section class="panel-42037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42037");
const base = ref(42037);
const total = computed(() => base.value * 2);

function incrementar42037() {
  base.value++;
}
</script>
