// fichero 29890 -- macros y constantes -- MODIFICADO
#define LIMITE_29890 30090
#define FACTOR_29890 2

int aplicar_limite29890(int valor) {
    if (valor > LIMITE_29890) return LIMITE_29890;
    return valor * FACTOR_29890;
}
