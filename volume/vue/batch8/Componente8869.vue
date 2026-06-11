<template>
  <section class="panel-8869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8869");
const base = ref(8869);
const total = computed(() => base.value * 2);

function incrementar8869() {
  base.value++;
}
</script>
