// fichero 40950 -- macros y constantes
#define LIMITE_40950 41050
#define FACTOR_40950 1

int aplicar_limite40950(int valor) {
    if (valor > LIMITE_40950) return LIMITE_40950;
    return valor * FACTOR_40950;
}
