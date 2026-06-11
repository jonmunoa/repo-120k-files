<template>
  <section class="panel-26493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26493");
const base = ref(26493);
const total = computed(() => base.value * 2);

function incrementar26493() {
  base.value++;
}
</script>
