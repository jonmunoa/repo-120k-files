<template>
  <section class="panel-26245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26245");
const base = ref(26245);
const total = computed(() => base.value * 2);

function incrementar26245() {
  base.value++;
}
</script>
