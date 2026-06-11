<template>
  <section class="panel-36329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36329");
const base = ref(36329);
const total = computed(() => base.value * 2);

function incrementar36329() {
  base.value++;
}
</script>
