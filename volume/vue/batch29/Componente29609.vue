<template>
  <section class="panel-29609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29609");
const base = ref(29609);
const total = computed(() => base.value * 2);

function incrementar29609() {
  base.value++;
}
</script>
