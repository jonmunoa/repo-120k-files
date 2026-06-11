<template>
  <section class="panel-34969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34969");
const base = ref(34969);
const total = computed(() => base.value * 2);

function incrementar34969() {
  base.value++;
}
</script>
