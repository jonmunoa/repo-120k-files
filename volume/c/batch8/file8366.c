// fichero 8366 -- macros y constantes -- MODIFICADO
#define LIMITE_8366 8566
#define FACTOR_8366 3

int aplicar_limite8366(int valor) {
    if (valor > LIMITE_8366) return LIMITE_8366;
    return valor * FACTOR_8366;
}
