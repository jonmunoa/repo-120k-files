// fichero 27890 -- macros y constantes -- MODIFICADO
#define LIMITE_27890 28090
#define FACTOR_27890 2

int aplicar_limite27890(int valor) {
    if (valor > LIMITE_27890) return LIMITE_27890;
    return valor * FACTOR_27890;
}
