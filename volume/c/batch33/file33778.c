// fichero 33778 -- macros y constantes
#define LIMITE_33778 33878
#define FACTOR_33778 4

int aplicar_limite33778(int valor) {
    if (valor > LIMITE_33778) return LIMITE_33778;
    return valor * FACTOR_33778;
}
