<template>
  <section class="panel-26589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26589");
const base = ref(26589);
const total = computed(() => base.value * 2);

function incrementar26589() {
  base.value++;
}
</script>
