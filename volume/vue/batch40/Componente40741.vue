<template>
  <section class="panel-40741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40741");
const base = ref(40741);
const total = computed(() => base.value * 2);

function incrementar40741() {
  base.value++;
}
</script>
