// fichero 19577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19577;

Registro19577 crear_registro19577(int id) {
    Registro19577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
