// fichero 3661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3661;

Registro3661 crear_registro3661(int id) {
    Registro3661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
