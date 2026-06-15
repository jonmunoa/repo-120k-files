// fichero 44118 -- macros y constantes -- MODIFICADO
#define LIMITE_44118 44318
#define FACTOR_44118 5

int aplicar_limite44118(int valor) {
    if (valor > LIMITE_44118) return LIMITE_44118;
    return valor * FACTOR_44118;
}
