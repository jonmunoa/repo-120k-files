<template>
  <section class="panel-8561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8561");
const base = ref(8561);
const total = computed(() => base.value * 2);

function incrementar8561() {
  base.value++;
}
</script>
