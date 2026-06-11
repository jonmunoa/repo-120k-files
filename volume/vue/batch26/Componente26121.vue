<template>
  <section class="panel-26121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26121");
const base = ref(26121);
const total = computed(() => base.value * 2);

function incrementar26121() {
  base.value++;
}
</script>
