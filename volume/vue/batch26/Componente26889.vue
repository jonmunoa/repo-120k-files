<template>
  <section class="panel-26889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26889");
const base = ref(26889);
const total = computed(() => base.value * 2);

function incrementar26889() {
  base.value++;
}
</script>
