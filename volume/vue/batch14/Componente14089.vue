<template>
  <section class="panel-14089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14089");
const base = ref(14089);
const total = computed(() => base.value * 2);

function incrementar14089() {
  base.value++;
}
</script>
