// fichero 34922 -- macros y constantes
#define LIMITE_34922 35022
#define FACTOR_34922 3

int aplicar_limite34922(int valor) {
    if (valor > LIMITE_34922) return LIMITE_34922;
    return valor * FACTOR_34922;
}
