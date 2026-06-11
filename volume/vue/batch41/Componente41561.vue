<template>
  <section class="panel-41561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41561");
const base = ref(41561);
const total = computed(() => base.value * 2);

function incrementar41561() {
  base.value++;
}
</script>
