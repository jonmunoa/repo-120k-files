<template>
  <section class="panel-34245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34245");
const base = ref(34245);
const total = computed(() => base.value * 2);

function incrementar34245() {
  base.value++;
}
</script>
