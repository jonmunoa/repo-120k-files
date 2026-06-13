// fichero 33890 -- macros y constantes
#define LIMITE_33890 33990
#define FACTOR_33890 1

int aplicar_limite33890(int valor) {
    if (valor > LIMITE_33890) return LIMITE_33890;
    return valor * FACTOR_33890;
}
