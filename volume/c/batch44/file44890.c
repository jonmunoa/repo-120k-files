// fichero 44890 -- macros y constantes -- MODIFICADO
#define LIMITE_44890 45090
#define FACTOR_44890 2

int aplicar_limite44890(int valor) {
    if (valor > LIMITE_44890) return LIMITE_44890;
    return valor * FACTOR_44890;
}
