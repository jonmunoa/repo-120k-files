<template>
  <section class="panel-38561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38561");
const base = ref(38561);
const total = computed(() => base.value * 2);

function incrementar38561() {
  base.value++;
}
</script>
