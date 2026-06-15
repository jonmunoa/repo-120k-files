// fichero 7890 -- macros y constantes -- MODIFICADO
#define LIMITE_7890 8090
#define FACTOR_7890 2

int aplicar_limite7890(int valor) {
    if (valor > LIMITE_7890) return LIMITE_7890;
    return valor * FACTOR_7890;
}
