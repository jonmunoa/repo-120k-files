// fichero 3358 -- macros y constantes -- MODIFICADO
#define LIMITE_3358 3558
#define FACTOR_3358 5

int aplicar_limite3358(int valor) {
    if (valor > LIMITE_3358) return LIMITE_3358;
    return valor * FACTOR_3358;
}
