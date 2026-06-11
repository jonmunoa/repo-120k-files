<template>
  <section class="panel-26457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26457");
const base = ref(26457);
const total = computed(() => base.value * 2);

function incrementar26457() {
  base.value++;
}
</script>
