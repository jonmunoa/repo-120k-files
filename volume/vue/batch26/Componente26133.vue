<template>
  <section class="panel-26133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26133");
const base = ref(26133);
const total = computed(() => base.value * 2);

function incrementar26133() {
  base.value++;
}
</script>
