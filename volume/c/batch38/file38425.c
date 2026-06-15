// fichero 38425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38425;

Registro38425 crear_registro38425(int id) {
    Registro38425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
