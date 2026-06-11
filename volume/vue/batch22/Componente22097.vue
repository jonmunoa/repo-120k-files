<template>
  <section class="panel-22097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22097");
const base = ref(22097);
const total = computed(() => base.value * 2);

function incrementar22097() {
  base.value++;
}
</script>
