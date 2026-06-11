<template>
  <section class="panel-47245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47245");
const base = ref(47245);
const total = computed(() => base.value * 2);

function incrementar47245() {
  base.value++;
}
</script>
