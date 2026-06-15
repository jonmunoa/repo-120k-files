// fichero 35202 -- macros y constantes -- MODIFICADO
#define LIMITE_35202 35402
#define FACTOR_35202 4

int aplicar_limite35202(int valor) {
    if (valor > LIMITE_35202) return LIMITE_35202;
    return valor * FACTOR_35202;
}
