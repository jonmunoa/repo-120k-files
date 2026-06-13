// fichero 41458 -- macros y constantes
#define LIMITE_41458 41558
#define FACTOR_41458 4

int aplicar_limite41458(int valor) {
    if (valor > LIMITE_41458) return LIMITE_41458;
    return valor * FACTOR_41458;
}
