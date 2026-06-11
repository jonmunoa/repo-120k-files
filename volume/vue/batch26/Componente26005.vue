<template>
  <section class="panel-26005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26005");
const base = ref(26005);
const total = computed(() => base.value * 2);

function incrementar26005() {
  base.value++;
}
</script>
