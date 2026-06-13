// fichero 24350 -- macros y constantes
#define LIMITE_24350 24450
#define FACTOR_24350 1

int aplicar_limite24350(int valor) {
    if (valor > LIMITE_24350) return LIMITE_24350;
    return valor * FACTOR_24350;
}
