<template>
  <section class="panel-47761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47761");
const base = ref(47761);
const total = computed(() => base.value * 2);

function incrementar47761() {
  base.value++;
}
</script>
