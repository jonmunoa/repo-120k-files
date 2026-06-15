// fichero 6350 -- macros y constantes -- MODIFICADO
#define LIMITE_6350 6550
#define FACTOR_6350 2

int aplicar_limite6350(int valor) {
    if (valor > LIMITE_6350) return LIMITE_6350;
    return valor * FACTOR_6350;
}
