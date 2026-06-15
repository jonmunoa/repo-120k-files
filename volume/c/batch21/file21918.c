// fichero 21918 -- macros y constantes -- MODIFICADO
#define LIMITE_21918 22118
#define FACTOR_21918 5

int aplicar_limite21918(int valor) {
    if (valor > LIMITE_21918) return LIMITE_21918;
    return valor * FACTOR_21918;
}
