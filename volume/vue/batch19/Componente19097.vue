<template>
  <section class="panel-19097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19097");
const base = ref(19097);
const total = computed(() => base.value * 2);

function incrementar19097() {
  base.value++;
}
</script>
