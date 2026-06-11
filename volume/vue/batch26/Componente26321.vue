<template>
  <section class="panel-26321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26321");
const base = ref(26321);
const total = computed(() => base.value * 2);

function incrementar26321() {
  base.value++;
}
</script>
