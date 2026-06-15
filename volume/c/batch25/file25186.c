// fichero 25186 -- macros y constantes -- MODIFICADO
#define LIMITE_25186 25386
#define FACTOR_25186 3

int aplicar_limite25186(int valor) {
    if (valor > LIMITE_25186) return LIMITE_25186;
    return valor * FACTOR_25186;
}
