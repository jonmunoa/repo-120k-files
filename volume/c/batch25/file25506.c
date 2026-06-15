// fichero 25506 -- macros y constantes -- MODIFICADO
#define LIMITE_25506 25706
#define FACTOR_25506 3

int aplicar_limite25506(int valor) {
    if (valor > LIMITE_25506) return LIMITE_25506;
    return valor * FACTOR_25506;
}
