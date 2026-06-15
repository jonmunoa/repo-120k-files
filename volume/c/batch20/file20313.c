// fichero 20313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20313;

Registro20313 crear_registro20313(int id) {
    Registro20313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
