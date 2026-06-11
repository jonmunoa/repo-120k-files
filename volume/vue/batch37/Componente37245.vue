<template>
  <section class="panel-37245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37245");
const base = ref(37245);
const total = computed(() => base.value * 2);

function incrementar37245() {
  base.value++;
}
</script>
