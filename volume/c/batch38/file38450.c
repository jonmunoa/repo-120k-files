// fichero 38450 -- macros y constantes -- MODIFICADO
#define LIMITE_38450 38650
#define FACTOR_38450 2

int aplicar_limite38450(int valor) {
    if (valor > LIMITE_38450) return LIMITE_38450;
    return valor * FACTOR_38450;
}
