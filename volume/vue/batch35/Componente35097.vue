<template>
  <section class="panel-35097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35097");
const base = ref(35097);
const total = computed(() => base.value * 2);

function incrementar35097() {
  base.value++;
}
</script>
