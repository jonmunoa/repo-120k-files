<template>
  <section class="panel-8253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8253");
const base = ref(8253);
const total = computed(() => base.value * 2);

function incrementar8253() {
  base.value++;
}
</script>
