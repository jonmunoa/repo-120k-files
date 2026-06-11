<template>
  <section class="panel-18849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18849");
const base = ref(18849);
const total = computed(() => base.value * 2);

function incrementar18849() {
  base.value++;
}
</script>
