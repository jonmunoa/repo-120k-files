<template>
  <section class="panel-26921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26921");
const base = ref(26921);
const total = computed(() => base.value * 2);

function incrementar26921() {
  base.value++;
}
</script>
