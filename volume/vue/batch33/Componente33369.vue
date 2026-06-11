<template>
  <section class="panel-33369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33369");
const base = ref(33369);
const total = computed(() => base.value * 2);

function incrementar33369() {
  base.value++;
}
</script>
