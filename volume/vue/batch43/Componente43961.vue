<template>
  <section class="panel-43961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43961");
const base = ref(43961);
const total = computed(() => base.value * 2);

function incrementar43961() {
  base.value++;
}
</script>
