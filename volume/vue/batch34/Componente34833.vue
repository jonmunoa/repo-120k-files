<template>
  <section class="panel-34833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34833");
const base = ref(34833);
const total = computed(() => base.value * 2);

function incrementar34833() {
  base.value++;
}
</script>
