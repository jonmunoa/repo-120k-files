<template>
  <section class="panel-4245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4245");
const base = ref(4245);
const total = computed(() => base.value * 2);

function incrementar4245() {
  base.value++;
}
</script>
