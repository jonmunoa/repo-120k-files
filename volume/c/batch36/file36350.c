// fichero 36350 -- macros y constantes -- MODIFICADO
#define LIMITE_36350 36550
#define FACTOR_36350 2

int aplicar_limite36350(int valor) {
    if (valor > LIMITE_36350) return LIMITE_36350;
    return valor * FACTOR_36350;
}
