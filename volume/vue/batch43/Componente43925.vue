<template>
  <section class="panel-43925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43925");
const base = ref(43925);
const total = computed(() => base.value * 2);

function incrementar43925() {
  base.value++;
}
</script>
