<template>
  <section class="panel-31501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31501");
const base = ref(31501);
const total = computed(() => base.value * 2);

function incrementar31501() {
  base.value++;
}
</script>
