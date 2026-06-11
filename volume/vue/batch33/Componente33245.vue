<template>
  <section class="panel-33245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33245");
const base = ref(33245);
const total = computed(() => base.value * 2);

function incrementar33245() {
  base.value++;
}
</script>
