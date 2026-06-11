<template>
  <section class="panel-41349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41349");
const base = ref(41349);
const total = computed(() => base.value * 2);

function incrementar41349() {
  base.value++;
}
</script>
