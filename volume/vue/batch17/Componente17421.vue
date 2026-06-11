<template>
  <section class="panel-17421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17421");
const base = ref(17421);
const total = computed(() => base.value * 2);

function incrementar17421() {
  base.value++;
}
</script>
