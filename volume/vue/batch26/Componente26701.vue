<template>
  <section class="panel-26701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26701");
const base = ref(26701);
const total = computed(() => base.value * 2);

function incrementar26701() {
  base.value++;
}
</script>
