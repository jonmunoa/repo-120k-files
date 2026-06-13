// fichero 40922 -- macros y constantes
#define LIMITE_40922 41022
#define FACTOR_40922 3

int aplicar_limite40922(int valor) {
    if (valor > LIMITE_40922) return LIMITE_40922;
    return valor * FACTOR_40922;
}
