<template>
  <section class="panel-21369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21369");
const base = ref(21369);
const total = computed(() => base.value * 2);

function incrementar21369() {
  base.value++;
}
</script>
