// fichero 35805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35805;

Registro35805 crear_registro35805(int id) {
    Registro35805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
