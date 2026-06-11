<template>
  <section class="panel-27741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27741");
const base = ref(27741);
const total = computed(() => base.value * 2);

function incrementar27741() {
  base.value++;
}
</script>
