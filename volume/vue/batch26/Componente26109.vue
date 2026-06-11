<template>
  <section class="panel-26109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26109");
const base = ref(26109);
const total = computed(() => base.value * 2);

function incrementar26109() {
  base.value++;
}
</script>
