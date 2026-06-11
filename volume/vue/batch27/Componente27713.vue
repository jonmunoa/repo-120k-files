<template>
  <section class="panel-27713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27713");
const base = ref(27713);
const total = computed(() => base.value * 2);

function incrementar27713() {
  base.value++;
}
</script>
