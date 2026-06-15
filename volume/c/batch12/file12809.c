// fichero 12809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12809;

Registro12809 crear_registro12809(int id) {
    Registro12809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
