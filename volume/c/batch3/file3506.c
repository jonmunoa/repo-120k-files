// fichero 3506 -- macros y constantes -- MODIFICADO
#define LIMITE_3506 3706
#define FACTOR_3506 3

int aplicar_limite3506(int valor) {
    if (valor > LIMITE_3506) return LIMITE_3506;
    return valor * FACTOR_3506;
}
