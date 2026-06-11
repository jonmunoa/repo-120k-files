<template>
  <section class="panel-6245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6245");
const base = ref(6245);
const total = computed(() => base.value * 2);

function incrementar6245() {
  base.value++;
}
</script>
