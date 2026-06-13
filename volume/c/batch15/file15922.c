// fichero 15922 -- macros y constantes
#define LIMITE_15922 16022
#define FACTOR_15922 3

int aplicar_limite15922(int valor) {
    if (valor > LIMITE_15922) return LIMITE_15922;
    return valor * FACTOR_15922;
}
