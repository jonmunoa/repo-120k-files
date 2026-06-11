<template>
  <section class="panel-26261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26261");
const base = ref(26261);
const total = computed(() => base.value * 2);

function incrementar26261() {
  base.value++;
}
</script>
