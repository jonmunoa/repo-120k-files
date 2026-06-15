// fichero 39506 -- macros y constantes -- MODIFICADO
#define LIMITE_39506 39706
#define FACTOR_39506 3

int aplicar_limite39506(int valor) {
    if (valor > LIMITE_39506) return LIMITE_39506;
    return valor * FACTOR_39506;
}
