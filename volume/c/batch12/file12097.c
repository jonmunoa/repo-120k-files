// fichero 12097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12097;

Registro12097 crear_registro12097(int id) {
    Registro12097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
