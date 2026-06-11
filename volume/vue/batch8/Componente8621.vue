<template>
  <section class="panel-8621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8621");
const base = ref(8621);
const total = computed(() => base.value * 2);

function incrementar8621() {
  base.value++;
}
</script>
