// fichero 6890 -- macros y constantes -- MODIFICADO
#define LIMITE_6890 7090
#define FACTOR_6890 2

int aplicar_limite6890(int valor) {
    if (valor > LIMITE_6890) return LIMITE_6890;
    return valor * FACTOR_6890;
}
