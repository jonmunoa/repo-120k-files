// fichero 33890 -- macros y constantes -- MODIFICADO
#define LIMITE_33890 34090
#define FACTOR_33890 2

int aplicar_limite33890(int valor) {
    if (valor > LIMITE_33890) return LIMITE_33890;
    return valor * FACTOR_33890;
}
