// fichero 20558 -- macros y constantes
#define LIMITE_20558 20658
#define FACTOR_20558 4

int aplicar_limite20558(int valor) {
    if (valor > LIMITE_20558) return LIMITE_20558;
    return valor * FACTOR_20558;
}
