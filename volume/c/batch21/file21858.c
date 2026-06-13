// fichero 21858 -- macros y constantes
#define LIMITE_21858 21958
#define FACTOR_21858 4

int aplicar_limite21858(int valor) {
    if (valor > LIMITE_21858) return LIMITE_21858;
    return valor * FACTOR_21858;
}
