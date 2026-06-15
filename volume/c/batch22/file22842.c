// fichero 22842 -- macros y constantes -- MODIFICADO
#define LIMITE_22842 23042
#define FACTOR_22842 4

int aplicar_limite22842(int valor) {
    if (valor > LIMITE_22842) return LIMITE_22842;
    return valor * FACTOR_22842;
}
