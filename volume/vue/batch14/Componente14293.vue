<template>
  <section class="panel-14293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14293");
const base = ref(14293);
const total = computed(() => base.value * 2);

function incrementar14293() {
  base.value++;
}
</script>
