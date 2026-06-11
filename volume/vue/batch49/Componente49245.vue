<template>
  <section class="panel-49245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49245");
const base = ref(49245);
const total = computed(() => base.value * 2);

function incrementar49245() {
  base.value++;
}
</script>
