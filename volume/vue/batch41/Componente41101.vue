<template>
  <section class="panel-41101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41101");
const base = ref(41101);
const total = computed(() => base.value * 2);

function incrementar41101() {
  base.value++;
}
</script>
