// fichero 40918 -- macros y constantes -- MODIFICADO
#define LIMITE_40918 41118
#define FACTOR_40918 5

int aplicar_limite40918(int valor) {
    if (valor > LIMITE_40918) return LIMITE_40918;
    return valor * FACTOR_40918;
}
