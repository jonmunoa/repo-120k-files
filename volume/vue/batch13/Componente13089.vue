<template>
  <section class="panel-13089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13089");
const base = ref(13089);
const total = computed(() => base.value * 2);

function incrementar13089() {
  base.value++;
}
</script>
