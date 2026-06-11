<template>
  <section class="panel-26049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26049");
const base = ref(26049);
const total = computed(() => base.value * 2);

function incrementar26049() {
  base.value++;
}
</script>
