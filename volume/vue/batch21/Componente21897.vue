<template>
  <section class="panel-21897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21897");
const base = ref(21897);
const total = computed(() => base.value * 2);

function incrementar21897() {
  base.value++;
}
</script>
