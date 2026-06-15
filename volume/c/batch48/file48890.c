// fichero 48890 -- macros y constantes -- MODIFICADO
#define LIMITE_48890 49090
#define FACTOR_48890 2

int aplicar_limite48890(int valor) {
    if (valor > LIMITE_48890) return LIMITE_48890;
    return valor * FACTOR_48890;
}
