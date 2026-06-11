<template>
  <section class="panel-38849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38849");
const base = ref(38849);
const total = computed(() => base.value * 2);

function incrementar38849() {
  base.value++;
}
</script>
