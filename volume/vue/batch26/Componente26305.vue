<template>
  <section class="panel-26305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26305");
const base = ref(26305);
const total = computed(() => base.value * 2);

function incrementar26305() {
  base.value++;
}
</script>
