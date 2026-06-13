// fichero 33350 -- macros y constantes
#define LIMITE_33350 33450
#define FACTOR_33350 1

int aplicar_limite33350(int valor) {
    if (valor > LIMITE_33350) return LIMITE_33350;
    return valor * FACTOR_33350;
}
