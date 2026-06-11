<template>
  <section class="panel-56369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56369");
const base = ref(56369);
const total = computed(() => base.value * 2);

function incrementar56369() {
  base.value++;
}
</script>
