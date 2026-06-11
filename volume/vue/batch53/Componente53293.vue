<template>
  <section class="panel-53293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53293");
const base = ref(53293);
const total = computed(() => base.value * 2);

function incrementar53293() {
  base.value++;
}
</script>
