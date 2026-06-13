// fichero 11501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11501;

Registro11501 crear_registro11501(int id) {
    Registro11501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11501(Registro11501 r) {
    return r.valor + r.id;
}
