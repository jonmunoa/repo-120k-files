<template>
  <section class="panel-39561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39561");
const base = ref(39561);
const total = computed(() => base.value * 2);

function incrementar39561() {
  base.value++;
}
</script>
