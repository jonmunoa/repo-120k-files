<template>
  <section class="panel-26045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26045");
const base = ref(26045);
const total = computed(() => base.value * 2);

function incrementar26045() {
  base.value++;
}
</script>
