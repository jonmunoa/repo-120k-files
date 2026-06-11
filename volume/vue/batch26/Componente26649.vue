<template>
  <section class="panel-26649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26649");
const base = ref(26649);
const total = computed(() => base.value * 2);

function incrementar26649() {
  base.value++;
}
</script>
