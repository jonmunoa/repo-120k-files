// fichero 21922 -- macros y constantes -- MODIFICADO
#define LIMITE_21922 22122
#define FACTOR_21922 4

int aplicar_limite21922(int valor) {
    if (valor > LIMITE_21922) return LIMITE_21922;
    return valor * FACTOR_21922;
}
