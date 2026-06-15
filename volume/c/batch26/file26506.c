// fichero 26506 -- macros y constantes -- MODIFICADO
#define LIMITE_26506 26706
#define FACTOR_26506 3

int aplicar_limite26506(int valor) {
    if (valor > LIMITE_26506) return LIMITE_26506;
    return valor * FACTOR_26506;
}
