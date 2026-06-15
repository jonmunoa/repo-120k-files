// fichero 8358 -- macros y constantes -- MODIFICADO
#define LIMITE_8358 8558
#define FACTOR_8358 5

int aplicar_limite8358(int valor) {
    if (valor > LIMITE_8358) return LIMITE_8358;
    return valor * FACTOR_8358;
}
