// fichero 18678 -- macros y constantes -- MODIFICADO
#define LIMITE_18678 18878
#define FACTOR_18678 5

int aplicar_limite18678(int valor) {
    if (valor > LIMITE_18678) return LIMITE_18678;
    return valor * FACTOR_18678;
}
