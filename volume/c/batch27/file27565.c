// fichero 27565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27565;

Registro27565 crear_registro27565(int id) {
    Registro27565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27565(Registro27565 r) {
    return r.valor + r.id;
}
