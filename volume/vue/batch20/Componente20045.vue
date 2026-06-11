<template>
  <section class="panel-20045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20045");
const base = ref(20045);
const total = computed(() => base.value * 2);

function incrementar20045() {
  base.value++;
}
</script>
