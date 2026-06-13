// fichero 11557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11557;

Registro11557 crear_registro11557(int id) {
    Registro11557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11557(Registro11557 r) {
    return r.valor + r.id;
}
