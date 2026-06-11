<template>
  <section class="panel-1961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1961");
const base = ref(1961);
const total = computed(() => base.value * 2);

function incrementar1961() {
  base.value++;
}
</script>
