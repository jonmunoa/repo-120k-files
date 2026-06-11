<template>
  <section class="panel-31245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31245");
const base = ref(31245);
const total = computed(() => base.value * 2);

function incrementar31245() {
  base.value++;
}
</script>
