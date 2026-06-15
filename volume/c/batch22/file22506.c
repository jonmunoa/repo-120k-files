// fichero 22506 -- macros y constantes -- MODIFICADO
#define LIMITE_22506 22706
#define FACTOR_22506 3

int aplicar_limite22506(int valor) {
    if (valor > LIMITE_22506) return LIMITE_22506;
    return valor * FACTOR_22506;
}
