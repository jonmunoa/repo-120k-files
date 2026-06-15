// fichero 29858 -- macros y constantes -- MODIFICADO
#define LIMITE_29858 30058
#define FACTOR_29858 5

int aplicar_limite29858(int valor) {
    if (valor > LIMITE_29858) return LIMITE_29858;
    return valor * FACTOR_29858;
}
