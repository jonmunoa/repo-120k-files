<template>
  <section class="panel-26705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26705");
const base = ref(26705);
const total = computed(() => base.value * 2);

function incrementar26705() {
  base.value++;
}
</script>
