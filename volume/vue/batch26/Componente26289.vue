<template>
  <section class="panel-26289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26289");
const base = ref(26289);
const total = computed(() => base.value * 2);

function incrementar26289() {
  base.value++;
}
</script>
