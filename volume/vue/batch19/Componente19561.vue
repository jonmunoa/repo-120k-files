<template>
  <section class="panel-19561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19561");
const base = ref(19561);
const total = computed(() => base.value * 2);

function incrementar19561() {
  base.value++;
}
</script>
