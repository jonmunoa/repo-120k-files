<template>
  <section class="panel-26621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26621");
const base = ref(26621);
const total = computed(() => base.value * 2);

function incrementar26621() {
  base.value++;
}
</script>
