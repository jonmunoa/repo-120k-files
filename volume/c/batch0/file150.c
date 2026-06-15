// fichero 150 -- macros y constantes -- MODIFICADO
#define LIMITE_150 350
#define FACTOR_150 2

int aplicar_limite150(int valor) {
    if (valor > LIMITE_150) return LIMITE_150;
    return valor * FACTOR_150;
}
