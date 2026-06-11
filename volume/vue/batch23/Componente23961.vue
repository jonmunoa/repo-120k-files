<template>
  <section class="panel-23961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23961");
const base = ref(23961);
const total = computed(() => base.value * 2);

function incrementar23961() {
  base.value++;
}
</script>
