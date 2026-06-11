<template>
  <section class="panel-27097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27097");
const base = ref(27097);
const total = computed(() => base.value * 2);

function incrementar27097() {
  base.value++;
}
</script>
