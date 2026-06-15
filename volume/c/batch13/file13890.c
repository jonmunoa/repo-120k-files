// fichero 13890 -- macros y constantes -- MODIFICADO
#define LIMITE_13890 14090
#define FACTOR_13890 2

int aplicar_limite13890(int valor) {
    if (valor > LIMITE_13890) return LIMITE_13890;
    return valor * FACTOR_13890;
}
