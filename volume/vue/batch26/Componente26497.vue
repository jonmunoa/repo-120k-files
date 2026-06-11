<template>
  <section class="panel-26497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26497");
const base = ref(26497);
const total = computed(() => base.value * 2);

function incrementar26497() {
  base.value++;
}
</script>
