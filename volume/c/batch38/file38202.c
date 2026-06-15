// fichero 38202 -- macros y constantes -- MODIFICADO
#define LIMITE_38202 38402
#define FACTOR_38202 4

int aplicar_limite38202(int valor) {
    if (valor > LIMITE_38202) return LIMITE_38202;
    return valor * FACTOR_38202;
}
