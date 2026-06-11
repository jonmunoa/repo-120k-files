<template>
  <section class="panel-29185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29185");
const base = ref(29185);
const total = computed(() => base.value * 2);

function incrementar29185() {
  base.value++;
}
</script>
