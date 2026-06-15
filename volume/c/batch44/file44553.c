// fichero 44553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44553;

Registro44553 crear_registro44553(int id) {
    Registro44553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
