// fichero 17890 -- macros y constantes
#define LIMITE_17890 17990
#define FACTOR_17890 1

int aplicar_limite17890(int valor) {
    if (valor > LIMITE_17890) return LIMITE_17890;
    return valor * FACTOR_17890;
}
