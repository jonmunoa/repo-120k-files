// fichero 47730 -- macros y constantes
#define LIMITE_47730 47830
#define FACTOR_47730 1

int aplicar_limite47730(int valor) {
    if (valor > LIMITE_47730) return LIMITE_47730;
    return valor * FACTOR_47730;
}
