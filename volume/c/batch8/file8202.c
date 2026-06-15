// fichero 8202 -- macros y constantes -- MODIFICADO
#define LIMITE_8202 8402
#define FACTOR_8202 4

int aplicar_limite8202(int valor) {
    if (valor > LIMITE_8202) return LIMITE_8202;
    return valor * FACTOR_8202;
}
