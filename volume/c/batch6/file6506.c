// fichero 6506 -- macros y constantes -- MODIFICADO
#define LIMITE_6506 6706
#define FACTOR_6506 3

int aplicar_limite6506(int valor) {
    if (valor > LIMITE_6506) return LIMITE_6506;
    return valor * FACTOR_6506;
}
