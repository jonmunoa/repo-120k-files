// fichero 7113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7113;

Registro7113 crear_registro7113(int id) {
    Registro7113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7113(Registro7113 r) {
    return r.valor + r.id;
}
