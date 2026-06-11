<template>
  <section class="panel-13245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13245");
const base = ref(13245);
const total = computed(() => base.value * 2);

function incrementar13245() {
  base.value++;
}
</script>
