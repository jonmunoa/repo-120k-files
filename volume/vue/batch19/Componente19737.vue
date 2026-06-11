<template>
  <section class="panel-19737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19737");
const base = ref(19737);
const total = computed(() => base.value * 2);

function incrementar19737() {
  base.value++;
}
</script>
