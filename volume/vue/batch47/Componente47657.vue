<template>
  <section class="panel-47657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47657");
const base = ref(47657);
const total = computed(() => base.value * 2);

function incrementar47657() {
  base.value++;
}
</script>
