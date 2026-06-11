<template>
  <section class="panel-36561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36561");
const base = ref(36561);
const total = computed(() => base.value * 2);

function incrementar36561() {
  base.value++;
}
</script>
