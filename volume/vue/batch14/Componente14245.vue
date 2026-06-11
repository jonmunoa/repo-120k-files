<template>
  <section class="panel-14245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14245");
const base = ref(14245);
const total = computed(() => base.value * 2);

function incrementar14245() {
  base.value++;
}
</script>
