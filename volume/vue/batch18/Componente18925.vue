<template>
  <section class="panel-18925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18925");
const base = ref(18925);
const total = computed(() => base.value * 2);

function incrementar18925() {
  base.value++;
}
</script>
