// fichero 29506 -- macros y constantes -- MODIFICADO
#define LIMITE_29506 29706
#define FACTOR_29506 3

int aplicar_limite29506(int valor) {
    if (valor > LIMITE_29506) return LIMITE_29506;
    return valor * FACTOR_29506;
}
