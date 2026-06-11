<template>
  <section class="panel-49621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49621");
const base = ref(49621);
const total = computed(() => base.value * 2);

function incrementar49621() {
  base.value++;
}
</script>
