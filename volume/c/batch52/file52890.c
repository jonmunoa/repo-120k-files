// fichero 52890 -- macros y constantes
#define LIMITE_52890 52990
#define FACTOR_52890 1

int aplicar_limite52890(int valor) {
    if (valor > LIMITE_52890) return LIMITE_52890;
    return valor * FACTOR_52890;
}
