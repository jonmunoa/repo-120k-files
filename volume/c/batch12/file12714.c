// fichero 12714 -- macros y constantes -- MODIFICADO
#define LIMITE_12714 12914
#define FACTOR_12714 6

int aplicar_limite12714(int valor) {
    if (valor > LIMITE_12714) return LIMITE_12714;
    return valor * FACTOR_12714;
}
