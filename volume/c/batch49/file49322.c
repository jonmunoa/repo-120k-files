// fichero 49322 -- macros y constantes
#define LIMITE_49322 49422
#define FACTOR_49322 3

int aplicar_limite49322(int valor) {
    if (valor > LIMITE_49322) return LIMITE_49322;
    return valor * FACTOR_49322;
}
