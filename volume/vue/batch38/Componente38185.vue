<template>
  <section class="panel-38185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38185");
const base = ref(38185);
const total = computed(() => base.value * 2);

function incrementar38185() {
  base.value++;
}
</script>
