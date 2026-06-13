// fichero 51458 -- macros y constantes
#define LIMITE_51458 51558
#define FACTOR_51458 4

int aplicar_limite51458(int valor) {
    if (valor > LIMITE_51458) return LIMITE_51458;
    return valor * FACTOR_51458;
}
