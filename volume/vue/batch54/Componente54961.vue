<template>
  <section class="panel-54961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54961");
const base = ref(54961);
const total = computed(() => base.value * 2);

function incrementar54961() {
  base.value++;
}
</script>
