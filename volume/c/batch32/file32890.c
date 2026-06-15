// fichero 32890 -- macros y constantes -- MODIFICADO
#define LIMITE_32890 33090
#define FACTOR_32890 2

int aplicar_limite32890(int valor) {
    if (valor > LIMITE_32890) return LIMITE_32890;
    return valor * FACTOR_32890;
}
