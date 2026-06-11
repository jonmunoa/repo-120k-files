<template>
  <section class="panel-49157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49157");
const base = ref(49157);
const total = computed(() => base.value * 2);

function incrementar49157() {
  base.value++;
}
</script>
