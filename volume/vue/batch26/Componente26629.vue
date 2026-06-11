<template>
  <section class="panel-26629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26629");
const base = ref(26629);
const total = computed(() => base.value * 2);

function incrementar26629() {
  base.value++;
}
</script>
