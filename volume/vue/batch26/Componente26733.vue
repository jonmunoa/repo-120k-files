<template>
  <section class="panel-26733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26733");
const base = ref(26733);
const total = computed(() => base.value * 2);

function incrementar26733() {
  base.value++;
}
</script>
