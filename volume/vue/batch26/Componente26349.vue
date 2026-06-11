<template>
  <section class="panel-26349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26349");
const base = ref(26349);
const total = computed(() => base.value * 2);

function incrementar26349() {
  base.value++;
}
</script>
