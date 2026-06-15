// fichero 8809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8809;

Registro8809 crear_registro8809(int id) {
    Registro8809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
