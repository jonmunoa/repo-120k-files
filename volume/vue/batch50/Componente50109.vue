<template>
  <section class="panel-50109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50109");
const base = ref(50109);
const total = computed(() => base.value * 2);

function incrementar50109() {
  base.value++;
}
</script>
