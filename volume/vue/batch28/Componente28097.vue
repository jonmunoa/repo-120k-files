<template>
  <section class="panel-28097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28097");
const base = ref(28097);
const total = computed(() => base.value * 2);

function incrementar28097() {
  base.value++;
}
</script>
