<template>
  <section class="panel-44961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44961");
const base = ref(44961);
const total = computed(() => base.value * 2);

function incrementar44961() {
  base.value++;
}
</script>
