// fichero 17202 -- macros y constantes -- MODIFICADO
#define LIMITE_17202 17402
#define FACTOR_17202 4

int aplicar_limite17202(int valor) {
    if (valor > LIMITE_17202) return LIMITE_17202;
    return valor * FACTOR_17202;
}
