// fichero 37930 -- macros y constantes -- MODIFICADO
#define LIMITE_37930 38130
#define FACTOR_37930 2

int aplicar_limite37930(int valor) {
    if (valor > LIMITE_37930) return LIMITE_37930;
    return valor * FACTOR_37930;
}
