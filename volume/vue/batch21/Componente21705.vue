<template>
  <section class="panel-21705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21705");
const base = ref(21705);
const total = computed(() => base.value * 2);

function incrementar21705() {
  base.value++;
}
</script>
