// fichero 29450 -- macros y constantes -- MODIFICADO
#define LIMITE_29450 29650
#define FACTOR_29450 2

int aplicar_limite29450(int valor) {
    if (valor > LIMITE_29450) return LIMITE_29450;
    return valor * FACTOR_29450;
}
