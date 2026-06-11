<template>
  <section class="panel-37089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37089");
const base = ref(37089);
const total = computed(() => base.value * 2);

function incrementar37089() {
  base.value++;
}
</script>
