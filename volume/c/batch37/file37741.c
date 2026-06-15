// fichero 37741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37741;

Registro37741 crear_registro37741(int id) {
    Registro37741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
