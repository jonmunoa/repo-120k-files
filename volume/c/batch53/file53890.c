// fichero 53890 -- macros y constantes
#define LIMITE_53890 53990
#define FACTOR_53890 1

int aplicar_limite53890(int valor) {
    if (valor > LIMITE_53890) return LIMITE_53890;
    return valor * FACTOR_53890;
}
