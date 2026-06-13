// fichero 41506 -- macros y constantes
#define LIMITE_41506 41606
#define FACTOR_41506 2

int aplicar_limite41506(int valor) {
    if (valor > LIMITE_41506) return LIMITE_41506;
    return valor * FACTOR_41506;
}
