// fichero 41350 -- macros y constantes -- MODIFICADO
#define LIMITE_41350 41550
#define FACTOR_41350 2

int aplicar_limite41350(int valor) {
    if (valor > LIMITE_41350) return LIMITE_41350;
    return valor * FACTOR_41350;
}
