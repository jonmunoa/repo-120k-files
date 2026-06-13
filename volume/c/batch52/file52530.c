// fichero 52530 -- macros y constantes
#define LIMITE_52530 52630
#define FACTOR_52530 1

int aplicar_limite52530(int valor) {
    if (valor > LIMITE_52530) return LIMITE_52530;
    return valor * FACTOR_52530;
}
