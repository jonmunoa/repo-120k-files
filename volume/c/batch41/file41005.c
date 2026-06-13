// fichero 41005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41005;

Registro41005 crear_registro41005(int id) {
    Registro41005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41005(Registro41005 r) {
    return r.valor + r.id;
}
