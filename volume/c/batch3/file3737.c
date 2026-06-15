// fichero 3737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3737;

Registro3737 crear_registro3737(int id) {
    Registro3737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
