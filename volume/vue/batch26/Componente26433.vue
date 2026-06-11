<template>
  <section class="panel-26433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26433");
const base = ref(26433);
const total = computed(() => base.value * 2);

function incrementar26433() {
  base.value++;
}
</script>
