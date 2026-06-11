<template>
  <section class="panel-33">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33");
const base = ref(33);
const total = computed(() => base.value * 2);

function incrementar33() {
  base.value++;
}
</script>
