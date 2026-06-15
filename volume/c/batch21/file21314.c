// fichero 21314 -- macros y constantes -- MODIFICADO
#define LIMITE_21314 21514
#define FACTOR_21314 6

int aplicar_limite21314(int valor) {
    if (valor > LIMITE_21314) return LIMITE_21314;
    return valor * FACTOR_21314;
}
