<template>
  <section class="panel-45737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45737");
const base = ref(45737);
const total = computed(() => base.value * 2);

function incrementar45737() {
  base.value++;
}
</script>
