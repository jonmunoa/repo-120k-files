// fichero 48802 -- macros y constantes -- MODIFICADO
#define LIMITE_48802 49002
#define FACTOR_48802 4

int aplicar_limite48802(int valor) {
    if (valor > LIMITE_48802) return LIMITE_48802;
    return valor * FACTOR_48802;
}
