// fichero 8273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8273;

Registro8273 crear_registro8273(int id) {
    Registro8273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
