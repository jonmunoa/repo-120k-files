<template>
  <section class="panel-18093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18093");
const base = ref(18093);
const total = computed(() => base.value * 2);

function incrementar18093() {
  base.value++;
}
</script>
