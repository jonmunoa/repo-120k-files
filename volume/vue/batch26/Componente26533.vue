<template>
  <section class="panel-26533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26533");
const base = ref(26533);
const total = computed(() => base.value * 2);

function incrementar26533() {
  base.value++;
}
</script>
