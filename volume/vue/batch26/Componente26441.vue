<template>
  <section class="panel-26441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26441");
const base = ref(26441);
const total = computed(() => base.value * 2);

function incrementar26441() {
  base.value++;
}
</script>
