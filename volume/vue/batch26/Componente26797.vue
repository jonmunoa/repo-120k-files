<template>
  <section class="panel-26797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26797");
const base = ref(26797);
const total = computed(() => base.value * 2);

function incrementar26797() {
  base.value++;
}
</script>
