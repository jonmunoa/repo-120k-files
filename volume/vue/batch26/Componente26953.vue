<template>
  <section class="panel-26953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26953");
const base = ref(26953);
const total = computed(() => base.value * 2);

function incrementar26953() {
  base.value++;
}
</script>
