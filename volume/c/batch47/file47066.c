// fichero 47066 -- macros y constantes -- MODIFICADO
#define LIMITE_47066 47266
#define FACTOR_47066 3

int aplicar_limite47066(int valor) {
    if (valor > LIMITE_47066) return LIMITE_47066;
    return valor * FACTOR_47066;
}
