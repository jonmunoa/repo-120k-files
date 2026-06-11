<template>
  <section class="panel-56961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56961");
const base = ref(56961);
const total = computed(() => base.value * 2);

function incrementar56961() {
  base.value++;
}
</script>
