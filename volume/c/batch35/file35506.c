// fichero 35506 -- macros y constantes
#define LIMITE_35506 35606
#define FACTOR_35506 2

int aplicar_limite35506(int valor) {
    if (valor > LIMITE_35506) return LIMITE_35506;
    return valor * FACTOR_35506;
}
