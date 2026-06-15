// fichero 15922 -- macros y constantes -- MODIFICADO
#define LIMITE_15922 16122
#define FACTOR_15922 4

int aplicar_limite15922(int valor) {
    if (valor > LIMITE_15922) return LIMITE_15922;
    return valor * FACTOR_15922;
}
