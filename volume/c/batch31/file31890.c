// fichero 31890 -- macros y constantes -- MODIFICADO
#define LIMITE_31890 32090
#define FACTOR_31890 2

int aplicar_limite31890(int valor) {
    if (valor > LIMITE_31890) return LIMITE_31890;
    return valor * FACTOR_31890;
}
