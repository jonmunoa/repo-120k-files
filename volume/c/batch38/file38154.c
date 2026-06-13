// fichero 38154 -- macros y constantes
#define LIMITE_38154 38254
#define FACTOR_38154 5

int aplicar_limite38154(int valor) {
    if (valor > LIMITE_38154) return LIMITE_38154;
    return valor * FACTOR_38154;
}
