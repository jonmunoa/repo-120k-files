// fichero 2922 -- macros y constantes -- MODIFICADO
#define LIMITE_2922 3122
#define FACTOR_2922 4

int aplicar_limite2922(int valor) {
    if (valor > LIMITE_2922) return LIMITE_2922;
    return valor * FACTOR_2922;
}
