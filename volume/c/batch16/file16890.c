// fichero 16890 -- macros y constantes -- MODIFICADO
#define LIMITE_16890 17090
#define FACTOR_16890 2

int aplicar_limite16890(int valor) {
    if (valor > LIMITE_16890) return LIMITE_16890;
    return valor * FACTOR_16890;
}
