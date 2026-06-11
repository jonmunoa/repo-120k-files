<template>
  <section class="panel-56245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56245");
const base = ref(56245);
const total = computed(() => base.value * 2);

function incrementar56245() {
  base.value++;
}
</script>
