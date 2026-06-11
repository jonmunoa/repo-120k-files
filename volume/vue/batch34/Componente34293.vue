<template>
  <section class="panel-34293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34293");
const base = ref(34293);
const total = computed(() => base.value * 2);

function incrementar34293() {
  base.value++;
}
</script>
