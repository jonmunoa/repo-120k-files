<template>
  <section class="panel-18981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18981");
const base = ref(18981);
const total = computed(() => base.value * 2);

function incrementar18981() {
  base.value++;
}
</script>
