<template>
  <section class="panel-26769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26769");
const base = ref(26769);
const total = computed(() => base.value * 2);

function incrementar26769() {
  base.value++;
}
</script>
