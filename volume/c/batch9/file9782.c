// fichero 9782 -- macros y constantes -- MODIFICADO
#define LIMITE_9782 9982
#define FACTOR_9782 4

int aplicar_limite9782(int valor) {
    if (valor > LIMITE_9782) return LIMITE_9782;
    return valor * FACTOR_9782;
}
