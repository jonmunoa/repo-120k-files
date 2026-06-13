// fichero 19697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19697;

Registro19697 crear_registro19697(int id) {
    Registro19697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19697(Registro19697 r) {
    return r.valor + r.id;
}
