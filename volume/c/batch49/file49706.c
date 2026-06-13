// fichero 49706 -- macros y constantes
#define LIMITE_49706 49806
#define FACTOR_49706 2

int aplicar_limite49706(int valor) {
    if (valor > LIMITE_49706) return LIMITE_49706;
    return valor * FACTOR_49706;
}
