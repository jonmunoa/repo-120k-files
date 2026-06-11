<template>
  <section class="panel-47713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47713");
const base = ref(47713);
const total = computed(() => base.value * 2);

function incrementar47713() {
  base.value++;
}
</script>
