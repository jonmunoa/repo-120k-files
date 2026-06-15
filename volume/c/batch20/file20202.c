// fichero 20202 -- macros y constantes -- MODIFICADO
#define LIMITE_20202 20402
#define FACTOR_20202 4

int aplicar_limite20202(int valor) {
    if (valor > LIMITE_20202) return LIMITE_20202;
    return valor * FACTOR_20202;
}
