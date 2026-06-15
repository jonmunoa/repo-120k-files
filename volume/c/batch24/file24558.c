// fichero 24558 -- macros y constantes -- MODIFICADO
#define LIMITE_24558 24758
#define FACTOR_24558 5

int aplicar_limite24558(int valor) {
    if (valor > LIMITE_24558) return LIMITE_24558;
    return valor * FACTOR_24558;
}
