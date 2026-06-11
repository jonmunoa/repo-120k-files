<template>
  <section class="panel-26093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26093");
const base = ref(26093);
const total = computed(() => base.value * 2);

function incrementar26093() {
  base.value++;
}
</script>
