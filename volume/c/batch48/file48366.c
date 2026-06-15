// fichero 48366 -- macros y constantes -- MODIFICADO
#define LIMITE_48366 48566
#define FACTOR_48366 3

int aplicar_limite48366(int valor) {
    if (valor > LIMITE_48366) return LIMITE_48366;
    return valor * FACTOR_48366;
}
