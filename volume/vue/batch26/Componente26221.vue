<template>
  <section class="panel-26221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26221");
const base = ref(26221);
const total = computed(() => base.value * 2);

function incrementar26221() {
  base.value++;
}
</script>
