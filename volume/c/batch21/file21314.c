// fichero 21314 -- macros y constantes
#define LIMITE_21314 21414
#define FACTOR_21314 5

int aplicar_limite21314(int valor) {
    if (valor > LIMITE_21314) return LIMITE_21314;
    return valor * FACTOR_21314;
}
