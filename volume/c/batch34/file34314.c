// fichero 34314 -- macros y constantes
#define LIMITE_34314 34414
#define FACTOR_34314 5

int aplicar_limite34314(int valor) {
    if (valor > LIMITE_34314) return LIMITE_34314;
    return valor * FACTOR_34314;
}
