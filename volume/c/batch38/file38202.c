// fichero 38202 -- macros y constantes
#define LIMITE_38202 38302
#define FACTOR_38202 3

int aplicar_limite38202(int valor) {
    if (valor > LIMITE_38202) return LIMITE_38202;
    return valor * FACTOR_38202;
}
