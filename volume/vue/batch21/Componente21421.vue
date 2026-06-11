<template>
  <section class="panel-21421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21421");
const base = ref(21421);
const total = computed(() => base.value * 2);

function incrementar21421() {
  base.value++;
}
</script>
