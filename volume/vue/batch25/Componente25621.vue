<template>
  <section class="panel-25621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25621");
const base = ref(25621);
const total = computed(() => base.value * 2);

function incrementar25621() {
  base.value++;
}
</script>
