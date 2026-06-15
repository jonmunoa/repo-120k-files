// fichero 12689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12689;

Registro12689 crear_registro12689(int id) {
    Registro12689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
