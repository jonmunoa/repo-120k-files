// fichero 24558 -- macros y constantes
#define LIMITE_24558 24658
#define FACTOR_24558 4

int aplicar_limite24558(int valor) {
    if (valor > LIMITE_24558) return LIMITE_24558;
    return valor * FACTOR_24558;
}
