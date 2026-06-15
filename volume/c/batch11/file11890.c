// fichero 11890 -- macros y constantes -- MODIFICADO
#define LIMITE_11890 12090
#define FACTOR_11890 2

int aplicar_limite11890(int valor) {
    if (valor > LIMITE_11890) return LIMITE_11890;
    return valor * FACTOR_11890;
}
