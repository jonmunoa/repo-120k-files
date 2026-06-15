// fichero 20950 -- macros y constantes -- MODIFICADO
#define LIMITE_20950 21150
#define FACTOR_20950 2

int aplicar_limite20950(int valor) {
    if (valor > LIMITE_20950) return LIMITE_20950;
    return valor * FACTOR_20950;
}
