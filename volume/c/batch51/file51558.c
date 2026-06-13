// fichero 51558 -- macros y constantes
#define LIMITE_51558 51658
#define FACTOR_51558 4

int aplicar_limite51558(int valor) {
    if (valor > LIMITE_51558) return LIMITE_51558;
    return valor * FACTOR_51558;
}
