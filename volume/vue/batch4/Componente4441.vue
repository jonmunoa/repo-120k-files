<template>
  <section class="panel-4441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4441");
const base = ref(4441);
const total = computed(() => base.value * 2);

function incrementar4441() {
  base.value++;
}
</script>
