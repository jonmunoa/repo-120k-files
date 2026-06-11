<template>
  <section class="panel-26657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26657");
const base = ref(26657);
const total = computed(() => base.value * 2);

function incrementar26657() {
  base.value++;
}
</script>
