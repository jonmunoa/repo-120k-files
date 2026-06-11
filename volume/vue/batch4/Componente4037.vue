<template>
  <section class="panel-4037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4037");
const base = ref(4037);
const total = computed(() => base.value * 2);

function incrementar4037() {
  base.value++;
}
</script>
