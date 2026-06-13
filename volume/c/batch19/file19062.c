// fichero 19062 -- macros y constantes
#define LIMITE_19062 19162
#define FACTOR_19062 3

int aplicar_limite19062(int valor) {
    if (valor > LIMITE_19062) return LIMITE_19062;
    return valor * FACTOR_19062;
}
