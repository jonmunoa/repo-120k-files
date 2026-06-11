<template>
  <section class="panel-17849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17849");
const base = ref(17849);
const total = computed(() => base.value * 2);

function incrementar17849() {
  base.value++;
}
</script>
