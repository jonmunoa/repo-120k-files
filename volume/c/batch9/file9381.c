// fichero 9381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9381;

Registro9381 crear_registro9381(int id) {
    Registro9381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
