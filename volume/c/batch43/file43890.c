// fichero 43890 -- macros y constantes -- MODIFICADO
#define LIMITE_43890 44090
#define FACTOR_43890 2

int aplicar_limite43890(int valor) {
    if (valor > LIMITE_43890) return LIMITE_43890;
    return valor * FACTOR_43890;
}
