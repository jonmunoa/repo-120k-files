// fichero 49890 -- macros y constantes -- MODIFICADO
#define LIMITE_49890 50090
#define FACTOR_49890 2

int aplicar_limite49890(int valor) {
    if (valor > LIMITE_49890) return LIMITE_49890;
    return valor * FACTOR_49890;
}
