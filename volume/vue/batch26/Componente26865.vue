<template>
  <section class="panel-26865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26865");
const base = ref(26865);
const total = computed(() => base.value * 2);

function incrementar26865() {
  base.value++;
}
</script>
