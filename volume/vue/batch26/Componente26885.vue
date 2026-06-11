<template>
  <section class="panel-26885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26885");
const base = ref(26885);
const total = computed(() => base.value * 2);

function incrementar26885() {
  base.value++;
}
</script>
