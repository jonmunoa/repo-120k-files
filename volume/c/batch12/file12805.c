// fichero 12805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12805;

Registro12805 crear_registro12805(int id) {
    Registro12805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
