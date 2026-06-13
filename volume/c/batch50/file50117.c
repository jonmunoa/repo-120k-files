// fichero 50117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50117;

Registro50117 crear_registro50117(int id) {
    Registro50117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50117(Registro50117 r) {
    return r.valor + r.id;
}
