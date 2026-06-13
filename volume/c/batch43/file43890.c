// fichero 43890 -- macros y constantes
#define LIMITE_43890 43990
#define FACTOR_43890 1

int aplicar_limite43890(int valor) {
    if (valor > LIMITE_43890) return LIMITE_43890;
    return valor * FACTOR_43890;
}
