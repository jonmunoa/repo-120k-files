<template>
  <section class="panel-26597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26597");
const base = ref(26597);
const total = computed(() => base.value * 2);

function incrementar26597() {
  base.value++;
}
</script>
