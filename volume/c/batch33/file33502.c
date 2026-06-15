// fichero 33502 -- macros y constantes -- MODIFICADO
#define LIMITE_33502 33702
#define FACTOR_33502 4

int aplicar_limite33502(int valor) {
    if (valor > LIMITE_33502) return LIMITE_33502;
    return valor * FACTOR_33502;
}
