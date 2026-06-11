<template>
  <section class="panel-27621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27621");
const base = ref(27621);
const total = computed(() => base.value * 2);

function incrementar27621() {
  base.value++;
}
</script>
