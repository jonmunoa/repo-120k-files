// fichero 33210 -- macros y constantes
#define LIMITE_33210 33310
#define FACTOR_33210 1

int aplicar_limite33210(int valor) {
    if (valor > LIMITE_33210) return LIMITE_33210;
    return valor * FACTOR_33210;
}
