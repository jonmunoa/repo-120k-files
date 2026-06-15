// fichero 6609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6609;

Registro6609 crear_registro6609(int id) {
    Registro6609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
