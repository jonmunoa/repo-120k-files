<template>
  <section class="panel-32561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32561");
const base = ref(32561);
const total = computed(() => base.value * 2);

function incrementar32561() {
  base.value++;
}
</script>
