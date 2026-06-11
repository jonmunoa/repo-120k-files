<template>
  <section class="panel-26729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26729");
const base = ref(26729);
const total = computed(() => base.value * 2);

function incrementar26729() {
  base.value++;
}
</script>
