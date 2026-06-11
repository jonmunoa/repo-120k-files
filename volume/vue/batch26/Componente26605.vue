<template>
  <section class="panel-26605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26605");
const base = ref(26605);
const total = computed(() => base.value * 2);

function incrementar26605() {
  base.value++;
}
</script>
