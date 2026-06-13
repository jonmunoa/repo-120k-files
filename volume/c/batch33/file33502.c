// fichero 33502 -- macros y constantes
#define LIMITE_33502 33602
#define FACTOR_33502 3

int aplicar_limite33502(int valor) {
    if (valor > LIMITE_33502) return LIMITE_33502;
    return valor * FACTOR_33502;
}
