<template>
  <section class="panel-26169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26169");
const base = ref(26169);
const total = computed(() => base.value * 2);

function incrementar26169() {
  base.value++;
}
</script>
