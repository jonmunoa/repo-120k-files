<template>
  <section class="panel-47089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47089");
const base = ref(47089);
const total = computed(() => base.value * 2);

function incrementar47089() {
  base.value++;
}
</script>
