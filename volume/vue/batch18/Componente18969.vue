<template>
  <section class="panel-18969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18969");
const base = ref(18969);
const total = computed(() => base.value * 2);

function incrementar18969() {
  base.value++;
}
</script>
