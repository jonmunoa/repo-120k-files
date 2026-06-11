<template>
  <section class="panel-35245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35245");
const base = ref(35245);
const total = computed(() => base.value * 2);

function incrementar35245() {
  base.value++;
}
</script>
