<template>
  <section class="panel-53561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53561");
const base = ref(53561);
const total = computed(() => base.value * 2);

function incrementar53561() {
  base.value++;
}
</script>
