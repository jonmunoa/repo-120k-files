<template>
  <section class="panel-8865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8865");
const base = ref(8865);
const total = computed(() => base.value * 2);

function incrementar8865() {
  base.value++;
}
</script>
