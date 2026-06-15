// fichero 29358 -- macros y constantes -- MODIFICADO
#define LIMITE_29358 29558
#define FACTOR_29358 5

int aplicar_limite29358(int valor) {
    if (valor > LIMITE_29358) return LIMITE_29358;
    return valor * FACTOR_29358;
}
