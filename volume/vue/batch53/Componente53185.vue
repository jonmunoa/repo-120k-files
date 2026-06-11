<template>
  <section class="panel-53185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53185");
const base = ref(53185);
const total = computed(() => base.value * 2);

function incrementar53185() {
  base.value++;
}
</script>
