// fichero 11558 -- macros y constantes
#define LIMITE_11558 11658
#define FACTOR_11558 4

int aplicar_limite11558(int valor) {
    if (valor > LIMITE_11558) return LIMITE_11558;
    return valor * FACTOR_11558;
}
