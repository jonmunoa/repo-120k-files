// fichero 4506 -- macros y constantes -- MODIFICADO
#define LIMITE_4506 4706
#define FACTOR_4506 3

int aplicar_limite4506(int valor) {
    if (valor > LIMITE_4506) return LIMITE_4506;
    return valor * FACTOR_4506;
}
