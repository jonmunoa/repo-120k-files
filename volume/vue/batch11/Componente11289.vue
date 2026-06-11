<template>
  <section class="panel-11289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11289");
const base = ref(11289);
const total = computed(() => base.value * 2);

function incrementar11289() {
  base.value++;
}
</script>
