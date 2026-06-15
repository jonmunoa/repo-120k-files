// fichero 44150 -- macros y constantes -- MODIFICADO
#define LIMITE_44150 44350
#define FACTOR_44150 2

int aplicar_limite44150(int valor) {
    if (valor > LIMITE_44150) return LIMITE_44150;
    return valor * FACTOR_44150;
}
