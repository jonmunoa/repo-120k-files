// fichero 11265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11265;

Registro11265 crear_registro11265(int id) {
    Registro11265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11265(Registro11265 r) {
    return r.valor + r.id;
}
