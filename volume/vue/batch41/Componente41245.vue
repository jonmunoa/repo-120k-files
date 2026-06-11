<template>
  <section class="panel-41245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41245");
const base = ref(41245);
const total = computed(() => base.value * 2);

function incrementar41245() {
  base.value++;
}
</script>
