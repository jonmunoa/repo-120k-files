<template>
  <section class="panel-49709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49709");
const base = ref(49709);
const total = computed(() => base.value * 2);

function incrementar49709() {
  base.value++;
}
</script>
