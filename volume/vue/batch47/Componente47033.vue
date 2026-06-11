<template>
  <section class="panel-47033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47033");
const base = ref(47033);
const total = computed(() => base.value * 2);

function incrementar47033() {
  base.value++;
}
</script>
