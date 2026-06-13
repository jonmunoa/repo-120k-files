// fichero 23350 -- macros y constantes
#define LIMITE_23350 23450
#define FACTOR_23350 1

int aplicar_limite23350(int valor) {
    if (valor > LIMITE_23350) return LIMITE_23350;
    return valor * FACTOR_23350;
}
