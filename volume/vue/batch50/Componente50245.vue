<template>
  <section class="panel-50245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50245");
const base = ref(50245);
const total = computed(() => base.value * 2);

function incrementar50245() {
  base.value++;
}
</script>
