// fichero 20458 -- macros y constantes
#define LIMITE_20458 20558
#define FACTOR_20458 4

int aplicar_limite20458(int valor) {
    if (valor > LIMITE_20458) return LIMITE_20458;
    return valor * FACTOR_20458;
}
