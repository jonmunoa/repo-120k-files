<template>
  <section class="panel-55097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55097");
const base = ref(55097);
const total = computed(() => base.value * 2);

function incrementar55097() {
  base.value++;
}
</script>
