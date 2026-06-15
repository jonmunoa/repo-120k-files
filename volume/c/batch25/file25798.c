// fichero 25798 -- macros y constantes -- MODIFICADO
#define LIMITE_25798 25998
#define FACTOR_25798 5

int aplicar_limite25798(int valor) {
    if (valor > LIMITE_25798) return LIMITE_25798;
    return valor * FACTOR_25798;
}
