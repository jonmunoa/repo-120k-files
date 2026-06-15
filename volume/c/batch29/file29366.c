// fichero 29366 -- macros y constantes -- MODIFICADO
#define LIMITE_29366 29566
#define FACTOR_29366 3

int aplicar_limite29366(int valor) {
    if (valor > LIMITE_29366) return LIMITE_29366;
    return valor * FACTOR_29366;
}
