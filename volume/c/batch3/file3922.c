// fichero 3922 -- macros y constantes -- MODIFICADO
#define LIMITE_3922 4122
#define FACTOR_3922 4

int aplicar_limite3922(int valor) {
    if (valor > LIMITE_3922) return LIMITE_3922;
    return valor * FACTOR_3922;
}
