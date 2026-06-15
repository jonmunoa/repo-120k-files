// fichero 34890 -- macros y constantes -- MODIFICADO
#define LIMITE_34890 35090
#define FACTOR_34890 2

int aplicar_limite34890(int valor) {
    if (valor > LIMITE_34890) return LIMITE_34890;
    return valor * FACTOR_34890;
}
