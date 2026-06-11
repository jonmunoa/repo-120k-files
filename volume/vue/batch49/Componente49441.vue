<template>
  <section class="panel-49441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49441");
const base = ref(49441);
const total = computed(() => base.value * 2);

function incrementar49441() {
  base.value++;
}
</script>
