// fichero 18890 -- macros y constantes -- MODIFICADO
#define LIMITE_18890 19090
#define FACTOR_18890 2

int aplicar_limite18890(int valor) {
    if (valor > LIMITE_18890) return LIMITE_18890;
    return valor * FACTOR_18890;
}
