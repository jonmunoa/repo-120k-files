<template>
  <section class="panel-26357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26357");
const base = ref(26357);
const total = computed(() => base.value * 2);

function incrementar26357() {
  base.value++;
}
</script>
