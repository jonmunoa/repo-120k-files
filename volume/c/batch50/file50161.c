// fichero 50161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50161;

Registro50161 crear_registro50161(int id) {
    Registro50161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50161(Registro50161 r) {
    return r.valor + r.id;
}
