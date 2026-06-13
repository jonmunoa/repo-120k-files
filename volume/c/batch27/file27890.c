// fichero 27890 -- macros y constantes
#define LIMITE_27890 27990
#define FACTOR_27890 1

int aplicar_limite27890(int valor) {
    if (valor > LIMITE_27890) return LIMITE_27890;
    return valor * FACTOR_27890;
}
