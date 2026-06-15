// fichero 1502 -- macros y constantes -- MODIFICADO
#define LIMITE_1502 1702
#define FACTOR_1502 4

int aplicar_limite1502(int valor) {
    if (valor > LIMITE_1502) return LIMITE_1502;
    return valor * FACTOR_1502;
}
