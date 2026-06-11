<template>
  <section class="panel-29097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29097");
const base = ref(29097);
const total = computed(() => base.value * 2);

function incrementar29097() {
  base.value++;
}
</script>
