<template>
  <section class="panel-20713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20713");
const base = ref(20713);
const total = computed(() => base.value * 2);

function incrementar20713() {
  base.value++;
}
</script>
