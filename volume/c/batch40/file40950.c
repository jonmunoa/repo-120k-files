// fichero 40950 -- macros y constantes -- MODIFICADO
#define LIMITE_40950 41150
#define FACTOR_40950 2

int aplicar_limite40950(int valor) {
    if (valor > LIMITE_40950) return LIMITE_40950;
    return valor * FACTOR_40950;
}
