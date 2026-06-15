// fichero 28558 -- macros y constantes -- MODIFICADO
#define LIMITE_28558 28758
#define FACTOR_28558 5

int aplicar_limite28558(int valor) {
    if (valor > LIMITE_28558) return LIMITE_28558;
    return valor * FACTOR_28558;
}
