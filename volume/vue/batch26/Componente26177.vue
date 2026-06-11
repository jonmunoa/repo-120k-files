<template>
  <section class="panel-26177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26177");
const base = ref(26177);
const total = computed(() => base.value * 2);

function incrementar26177() {
  base.value++;
}
</script>
