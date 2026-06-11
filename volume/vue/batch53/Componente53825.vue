<template>
  <section class="panel-53825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53825");
const base = ref(53825);
const total = computed(() => base.value * 2);

function incrementar53825() {
  base.value++;
}
</script>
