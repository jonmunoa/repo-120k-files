// fichero 38206 -- macros y constantes
#define LIMITE_38206 38306
#define FACTOR_38206 2

int aplicar_limite38206(int valor) {
    if (valor > LIMITE_38206) return LIMITE_38206;
    return valor * FACTOR_38206;
}
