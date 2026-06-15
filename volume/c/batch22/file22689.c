// fichero 22689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22689;

Registro22689 crear_registro22689(int id) {
    Registro22689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
