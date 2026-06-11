<template>
  <section class="panel-26973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26973");
const base = ref(26973);
const total = computed(() => base.value * 2);

function incrementar26973() {
  base.value++;
}
</script>
