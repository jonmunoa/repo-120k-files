<template>
  <section class="panel-33301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33301");
const base = ref(33301);
const total = computed(() => base.value * 2);

function incrementar33301() {
  base.value++;
}
</script>
