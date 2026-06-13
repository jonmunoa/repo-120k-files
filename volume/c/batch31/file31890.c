// fichero 31890 -- macros y constantes
#define LIMITE_31890 31990
#define FACTOR_31890 1

int aplicar_limite31890(int valor) {
    if (valor > LIMITE_31890) return LIMITE_31890;
    return valor * FACTOR_31890;
}
