// fichero 49506 -- macros y constantes
#define LIMITE_49506 49606
#define FACTOR_49506 2

int aplicar_limite49506(int valor) {
    if (valor > LIMITE_49506) return LIMITE_49506;
    return valor * FACTOR_49506;
}
