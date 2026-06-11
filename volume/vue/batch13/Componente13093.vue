<template>
  <section class="panel-13093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13093");
const base = ref(13093);
const total = computed(() => base.value * 2);

function incrementar13093() {
  base.value++;
}
</script>
