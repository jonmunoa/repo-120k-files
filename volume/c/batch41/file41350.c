// fichero 41350 -- macros y constantes
#define LIMITE_41350 41450
#define FACTOR_41350 1

int aplicar_limite41350(int valor) {
    if (valor > LIMITE_41350) return LIMITE_41350;
    return valor * FACTOR_41350;
}
