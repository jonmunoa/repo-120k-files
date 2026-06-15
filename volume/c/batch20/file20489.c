// fichero 20489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20489;

Registro20489 crear_registro20489(int id) {
    Registro20489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
