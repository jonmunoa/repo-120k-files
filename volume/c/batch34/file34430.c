// fichero 34430 -- macros y constantes -- MODIFICADO
#define LIMITE_34430 34630
#define FACTOR_34430 2

int aplicar_limite34430(int valor) {
    if (valor > LIMITE_34430) return LIMITE_34430;
    return valor * FACTOR_34430;
}
