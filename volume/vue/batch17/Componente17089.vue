<template>
  <section class="panel-17089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17089");
const base = ref(17089);
const total = computed(() => base.value * 2);

function incrementar17089() {
  base.value++;
}
</script>
