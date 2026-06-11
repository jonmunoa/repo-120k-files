<template>
  <section class="panel-38981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38981");
const base = ref(38981);
const total = computed(() => base.value * 2);

function incrementar38981() {
  base.value++;
}
</script>
