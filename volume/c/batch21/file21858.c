// fichero 21858 -- macros y constantes -- MODIFICADO
#define LIMITE_21858 22058
#define FACTOR_21858 5

int aplicar_limite21858(int valor) {
    if (valor > LIMITE_21858) return LIMITE_21858;
    return valor * FACTOR_21858;
}
