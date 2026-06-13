// fichero 21918 -- macros y constantes
#define LIMITE_21918 22018
#define FACTOR_21918 4

int aplicar_limite21918(int valor) {
    if (valor > LIMITE_21918) return LIMITE_21918;
    return valor * FACTOR_21918;
}
