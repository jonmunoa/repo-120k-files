// fichero 17890 -- macros y constantes -- MODIFICADO
#define LIMITE_17890 18090
#define FACTOR_17890 2

int aplicar_limite17890(int valor) {
    if (valor > LIMITE_17890) return LIMITE_17890;
    return valor * FACTOR_17890;
}
