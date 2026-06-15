// fichero 49358 -- macros y constantes -- MODIFICADO
#define LIMITE_49358 49558
#define FACTOR_49358 5

int aplicar_limite49358(int valor) {
    if (valor > LIMITE_49358) return LIMITE_49358;
    return valor * FACTOR_49358;
}
