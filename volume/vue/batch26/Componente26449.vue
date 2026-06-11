<template>
  <section class="panel-26449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26449");
const base = ref(26449);
const total = computed(() => base.value * 2);

function incrementar26449() {
  base.value++;
}
</script>
