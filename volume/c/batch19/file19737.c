// fichero 19737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19737;

Registro19737 crear_registro19737(int id) {
    Registro19737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
