// fichero 48290 -- macros y constantes
#define LIMITE_48290 48390
#define FACTOR_48290 1

int aplicar_limite48290(int valor) {
    if (valor > LIMITE_48290) return LIMITE_48290;
    return valor * FACTOR_48290;
}
