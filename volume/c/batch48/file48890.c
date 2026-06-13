// fichero 48890 -- macros y constantes
#define LIMITE_48890 48990
#define FACTOR_48890 1

int aplicar_limite48890(int valor) {
    if (valor > LIMITE_48890) return LIMITE_48890;
    return valor * FACTOR_48890;
}
