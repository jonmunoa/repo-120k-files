// fichero 202 -- macros y constantes -- MODIFICADO
#define LIMITE_202 402
#define FACTOR_202 4

int aplicar_limite202(int valor) {
    if (valor > LIMITE_202) return LIMITE_202;
    return valor * FACTOR_202;
}
