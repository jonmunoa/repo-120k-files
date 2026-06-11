<template>
  <section class="panel-10089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10089");
const base = ref(10089);
const total = computed(() => base.value * 2);

function incrementar10089() {
  base.value++;
}
</script>
