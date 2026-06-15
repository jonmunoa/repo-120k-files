// fichero 23890 -- macros y constantes -- MODIFICADO
#define LIMITE_23890 24090
#define FACTOR_23890 2

int aplicar_limite23890(int valor) {
    if (valor > LIMITE_23890) return LIMITE_23890;
    return valor * FACTOR_23890;
}
