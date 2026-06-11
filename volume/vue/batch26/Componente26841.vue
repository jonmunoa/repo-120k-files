<template>
  <section class="panel-26841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26841");
const base = ref(26841);
const total = computed(() => base.value * 2);

function incrementar26841() {
  base.value++;
}
</script>
